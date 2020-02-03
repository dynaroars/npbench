/* Dimacs graph format translator to and from a binary, more efficient
   format. Written by Tamas Badics (badics@rutcor.rutgers.edu), 
   using the technique of Marcus Peinado. */

/* Marcus Peinado
   Department of Computer Science
   Boston University
   */

#include <stdio.h>

#define MAXPREAM 10000
static char Preamble[MAXPREAM];

/* ====================================================== */

void write_graph_DIMACS_ascii(file)
     char *file;
{
	int i,j;
	FILE *fp;

	if (*file == '\0')
	  fp = stdout;
	else{ 
		if ( (fp=fopen(file,"w"))==NULL )
		  { printf("ERROR: Cannot open outfile\n"); exit(10); }
	}
	
	fprintf(fp, Preamble);
	
	if (fp != stdout) fclose(fp);
}

void read_graph_DIMACS_bin(file)
     char *file;
{

	int i, length = 0;
	FILE *fp;
	
	if ( (fp=fopen(file,"r"))==NULL )
	  { printf("ERROR: Cannot open infile\n"); exit(10); }

	if (!fscanf(fp, "%10d\n", &length))
	  { printf("ERROR: Corrupted preamble.\n"); exit(10); }

	if(length > MAXPREAM)
	  { printf("ERROR: Too long preamble.\n"); exit(10); }
		   
	fread(Preamble, 1, length, fp);
	Preamble[length] = '\0';
	
	fclose(fp);
}

/* ============================================= */
main(argc, argv)
     int argc;
     char **argv;
{
	int i;
	char name[255];
	
	if ( argc > 3 || argc < 2) 
	  {printf("Usage: %s binary_infile [outfile]\n",argv[0]);  exit(10); }

	if (argc == 2){ 
		name[0] = '\0';
 	}else 
	  sprintf(name, "%s", argv[2]);
	
	read_graph_DIMACS_bin( argv[1] );
	write_graph_DIMACS_ascii( name );
}

