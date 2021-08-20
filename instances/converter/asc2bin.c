/* Dimacs graph format translator to and from a binary, more efficient
   format. Written by Tamas Badics (badics@rutcor.rutgers.edu), 
   using the technique of Marcus Peinado. */
/*
   Modified September 13, 1993 to change type of oc,c from char to int
   avoiding infinite loop on EOF for some compilers: MT */

/* Marcus Peinado
   Department of Computer Science
   Boston University
   */

#include "genbin.h"

int get_params();
/* ====================================================== */

void set_edge(i, j, x)
     register int i;
     register int j;
     char x;
{
	register int byte, bit, mask;
	
	bit  = 7 - (j & 0x00000007);
	byte = j >> 3;
	
	mask = masks[bit];
	if ( x == 1 ) Bitmap[i][byte] |= mask;
	else  Bitmap[i][byte] &= ~mask;
}

/* ============================================= */
void write_graph_DIMACS_bin(file)
     char *file;
{

	int i;
	FILE *fp;
	
	if ( (fp=fopen(file,"w"))==NULL )
	  { printf("ERROR: Cannot open outfile\n"); exit(10); }

	fprintf(fp, "%d\n", strlen(Preamble));
	fprintf(fp, Preamble);
	
	for ( i = 0
		 ; i < Nr_vert && fwrite(Bitmap[i], 1, (int)((i + 8)/8), fp)
		 ; i++ );
	
	fclose(fp);
}

void read_graph_DIMACS_ascii(file)
     char *file;
{

	int c, oc;
	char * pp = Preamble;
	int i,j;
	FILE *fp;
	
	if ( (fp=fopen(file,"r"))==NULL )
	  { printf("ERROR: Cannot open infile\n"); exit(10); }

	for(oc = '\0' ;(c = fgetc(fp)) != EOF && (oc != '\n' || c != 'e')
		; oc = *pp++ = c);
 
	ungetc(c, fp); 
	*pp = '\0';
	get_params();

	while ((c = fgetc(fp)) != EOF){
		switch (c)
		  {
			case 'e':
			  if (!fscanf(fp, "%d %d", &i, &j))
				{ printf("ERROR: corrupted inputfile\n"); exit(10); }
			  
			  if (i > j) 
				set_edge(i-1, j-1, 1);
			  else
				set_edge(j-1, i-1, 1);
			  break;
			  
			case '\n':
			  
			default:
			  break;
		  }
	}
	
	fclose(fp);
}

int get_params()
                      /* getting Nr_vert and Nr_edge from the preamble string, 
						 containing Dimacs format "p ??? num num" */
{
	char c, *tmp;
	char * pp = Preamble;
	int stop = 0;
	tmp = (char *)calloc(100, sizeof(char));
	
	Nr_vert = Nr_edges = 0;
	
	while (!stop && (c = *pp++) != '\0'){
		switch (c)
		  {
			case 'c':
			  while ((c = *pp++) != '\n' && c != '\0');
			  break;
			  
			case 'p':
			  sscanf(pp, "%s %d %d\n", tmp, &Nr_vert, &Nr_edges);
			  stop = 1;
			  break;
			  
			default:
			  break;
		  }
	}
	
	free(tmp);
	
	if (Nr_vert == 0 || Nr_edges == 0)
	  return 0;  /* error */
	else
	  return 1;
	
}

/* ============================================= */
main(argc, argv)
     int argc;
     char **argv;
{
	int i;
	char name[255];
	
	if ( argc > 3 || argc < 2) 
	  {printf("Usage: %s infile [outfile]\n",argv[0]);  exit(10); }
	
	read_graph_DIMACS_ascii( argv[1] );

	if (argc == 2)
	  sprintf(name, "%s.b", argv[1]);
	else 
	  sprintf(name, "%s", argv[2]);
	
	write_graph_DIMACS_bin( name );
}

