:	This is a shell archive.
:	Remove everything above this line and
:	run the following text with /bin/sh to create:
:	Makefile
:	README.binformat
:	asc2bin.c
:	asc2bin.c.BAK
:	bin2asc.c
:	genbin.h
:	generator.c
:	showpreamble.c
: This archive created: Tue Sep 14 15:05:15 1993
cat << 'SHAR_EOF' > Makefile
all: 
		cc -O asc2bin.c -o asc2bin 
		cc -O bin2asc.c -o bin2asc
		cc -O showpreamble.c -o showpreamble

SHAR_EOF
cat << 'SHAR_EOF' > README.binformat
DIMACS Challenge II 
  
  DIMACS Format for Storing Undirected Graphs in Binary Files
  -----------------------------------------------------------

The binary format for storing a graph is an alternative to the ascii
(human readable) format described in the File Formats section of the
document /pub/challenge/graph/doc/ccformat.tex at dimacs.rutgers.edu
(anonymous ftp). 

If the edge density of the graph is bigger than ~1.2%, the binary
storage is more space efficient. It uses roughly (N^2)/16 bytes 
for a graph of N vertices and M edges, while the ascii format needs
about M*9 bytes for the same graph.


The file "binformat.shar" contains three codes:
-----------------------------------------------

	asc2bin infile [outfile]

		Converts an ascii format file (infile) to binary format. 
		If "outfile" is omitted, it creates a file "infile.b".

	bin2asc infile [outfile]

		Converts a binary format file (infile) to ascii format.
		"infile" must have suffix ".b". 
		If "outfile" is omitted, it creates a file with the same name
		as "infile", eexcept the ".b" suffix is removed.
	
	showpreamble binary_infile [outfile]

		Extracts the preamble information of the "binary_infile"
		to stdout or to a "outfile".


BINARY FORMAT for storing a graph of N vertices
-----------------------------------------------

The file consists of 3 blocks: 

	First Line
	Preamble
	Binary Block (The rest of the file)

	The First Line contains an integer (%d, say #) describing the
	length of the proceeding preamble.

	The a Preamble consists of # characters, and contains possibly
some comments following the ascii format plus a line
describing the number of vertices and edges in the graph. 
(In "p type Num_vertices Num_edges" format).

	The Binary Block contains the lower triangular part of the
vertex-vertex adjacency matrix of the graph. Each row of the matrix is
stored as sequence of bits, where the j'th bit is 1 if the edge (i,j) 
is in the graph otherwise the bit is 0. (Note that i >= j)

For more information, see the routine "read_graph_DIMACS_bin()"
in the file "bin2asc.c". 

IMPLEMENTATION details
----------------------

You may read the files "asc2bin.c" and "bin2asc.c" and extract any
part of the code to implement the binary storage internally. 

SHAR_EOF
cat << 'SHAR_EOF' > asc2bin.c
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

SHAR_EOF
cat << 'SHAR_EOF' > asc2bin.c.BAK
/* Dimacs graph format translator to and from a binary, more efficient
   format. Written by Tamas Badics (badics@rutcor.rutgers.edu), 
   using the technique of Marcus Peinado. */

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

	char c, oc;
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

SHAR_EOF
cat << 'SHAR_EOF' > bin2asc.c
/* Dimacs graph format translator to and from a binary, more efficient
   format. Written by Tamas Badics (badics@rutcor.rutgers.edu), 
   using the technique of Marcus Peinado. */

/* Marcus Peinado
   Department of Computer Science
   Boston University
   */

#include "genbin.h"

int get_params();
/* ====================================================== */

BOOL get_edge(i, j)
     int i;
     int j;
{
	int byte, bit;
	char mask;
	
	bit  = 7-(j & 0x00000007);
	byte = j >> 3;
	
	mask = masks[bit];
	return( (Bitmap[i][byte] & mask)==mask );
}

/* ============================================= */

void write_graph_DIMACS_ascii(file)
     char *file;
{
	int i,j;
	FILE *fp;
	
	if ( (fp=fopen(file,"w"))==NULL )
	  { printf("ERROR: Cannot open outfile\n"); exit(10); }
	
	fprintf(fp, Preamble);
	
	for ( i = 0; i<Nr_vert; i++ )
	  {
		  for ( j=0; j<=i; j++ )
			if ( get_edge(i,j) ) fprintf(fp,"e %d %d\n",i+1,j+1 );
	  }
	
	fclose(fp);
}

void read_graph_DIMACS_bin(file)
     char *file;
{

	int i, length = 0;
	FILE *fp;
	
	if ( (fp=fopen(file,"r"))==NULL )
	  { printf("ERROR: Cannot open infile\n"); exit(10); }

	if (!fscanf(fp, "%d\n", &length))
	  { printf("ERROR: Corrupted preamble.\n"); exit(10); }

	if(length >= MAX_PREAMBLE)
	  { printf("ERROR: Too long preamble.\n"); exit(10); }
		   
	fread(Preamble, 1, length, fp);
	Preamble[length] = '\0';
	
	if (!get_params())
		  { printf("ERROR: Corrupted preamble.\n"); exit(10); }

	for ( i = 0
		 ; i < Nr_vert && fread(Bitmap[i], 1, (int)((i + 8)/8), fp)
		 ; i++ );

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

	if (argc == 2){ 
		strcpy(name, argv[1]);
		i = strlen(name) -1;
		
		if (*(name + i) == 'b' && *(name + i-1) == '.'){
			*(name + i-1) = '\0';
		}else
		  { printf("ERROR: Wrong input file name.\n"); exit(10); }
 	}else 
	  sprintf(name, "%s", argv[2]);
	
	read_graph_DIMACS_bin( argv[1] );
	write_graph_DIMACS_ascii( name );
}

SHAR_EOF
cat << 'SHAR_EOF' > genbin.h
#ifndef GENBIN 
#define GENBIN

#include <stdio.h>

/* If you change MAX_NR_VERTICES, change MAX_NR_VERTICESdiv8 to be 
the 1/8th of it */

#define MAX_NR_VERTICES		5000
#define MAX_NR_VERTICESdiv8	625

#define BOOL	char

int Nr_vert, Nr_edges;
BOOL Bitmap[MAX_NR_VERTICES][MAX_NR_VERTICESdiv8];

char masks[ 8 ] = { 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80 };

#define MAX_PREAMBLE 10000
static char Preamble[MAX_PREAMBLE];

#endif
SHAR_EOF
cat << 'SHAR_EOF' > generator.c
/* Graph generator for the CLIQUE problem by
       Marcus Peinado
       Department of Computer Science
       Boston University
*/


/* Parameters of the graph */

#define prob  0.5  /* edge probability for the random part of the graph */
#define alpha 0.5  /* determines size l of largest clique (l = n^alpha) */



#include <math.h>
#include <stdio.h>

#define TRUE    1
#define FALSE   0
#define AND     &&
#define OR      ||
#define NOT     !
#define MOD     %
#define BOOL	char
#define randomNat(n)	(random() MOD (n))

#define MAXLONG         0x7fffffff
extern long random();

#define MAX_NR_VERTICES		5000
#define MAX_NR_VERTICESdiv8	 625



BOOL bitmap[ MAX_NR_VERTICES ][ MAX_NR_VERTICESdiv8 ];
int nr_vert, nr_edges, cl_size, Clique[ MAX_NR_VERTICES ];
double p2;


char masks[ 8 ] = { 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80 };

double randomFloat()
{
        return ( (double)random() / (double)MAXLONG );
}

BOOL get_edge( register int i, register int j )
{
	register int byte, bit, mask;

	bit  = 7-(j & 0x00000007);
	byte = j >> 3;

	mask = masks[bit];
	return( (bitmap[i][byte] & mask)==mask );
}


void set_edge( register int i, register int j, BOOL x )
{
	register int byte, bit, mask;

	bit  = 7 - (j & 0x00000007);
	byte = j >> 3;

	mask = masks[bit];
	if ( x == 1 ) bitmap[i][byte] |= mask;
		else  bitmap[i][byte] &= ~mask;
}


int round( int r, int q )
{
	if ( (r MOD q) == 0 ) return( r / q );
	else return( 1 + r/q );
}


void write_graph_DIMACS( char *file )
{
        char c;
        int i,j, line_length;
	BOOL tmp;
	FILE *fp;

	if ( (fp=fopen(file,"w"))==NULL )
	        { printf("ERROR: cannot open file\n"); exit(10); }

	fprintf(fp,"c This graph contains a clique of size %d\n",cl_size );
        fprintf(fp,"p clq %d %d\n",nr_vert,nr_edges);
        for ( i = 1; i<nr_vert; i++ )
                {
                for ( j=0; j<i; j++ )
		        if ( get_edge(i,j) ) fprintf(fp,"e %d %d\n",i,j );
                }
	fclose(fp);
}


void make_random_set( int G[], int size )
{
	int i, j;

	for ( i=0; i<nr_vert; i++ )
	        G[i] = 0;

	for ( i=1; i<=size; i++ )
	  {
	    do {
	      j = randomNat( nr_vert );
	       }
	    while ( G[j] == 1 );
	    G[j] = 1;
	  }
}


void empty_graph()
{
	int i, j;

	for ( i=0; i<nr_vert; i++ )
		for ( j=0; j<nr_vert; j++ )
			set_edge(i,j,FALSE);
}

void complete_graph( int G[] )
{
	int i, j;

	for ( i=1; i<nr_vert; i++ )
		for ( j=0; j<i; j++ )
			if ( (G[i]==1) && (G[j]==1) )
				{
				set_edge( i,j,TRUE );
				set_edge( j,i,TRUE );
				}
	nr_edges = cl_size * (cl_size-1) / 2;
}


void rand_graph()
{
	int i, j, no;

	for ( i=0; i<nr_vert; i++ )
		for ( j=0; j<i; j++ )
                        if ( (Clique[i]==0) AND (Clique[j]==0) )
				if ( randomFloat() < prob )
					{
					nr_edges++;
					set_edge( i,j,TRUE );
					set_edge( j,i,TRUE );
					}
				else
					{
					set_edge( i,j,FALSE );
					set_edge( j,i,FALSE );
					}
                        else if ( ((Clique[i]==1) AND (Clique[j]==0))
                            OR    ((Clique[i]==0) AND (Clique[j]==1)) )
				if ( randomFloat() < p2 )
					{
					nr_edges++;
					set_edge( i,j,TRUE );
					set_edge( j,i,TRUE );
					}
				else
					{
					set_edge( i,j,FALSE );
					set_edge( j,i,FALSE );
					}
}


main( int argc, char *argv[] )
{
	int i, j;

	srandom( time( (char *)0 ) );

	if ( argc != 3 ) {printf("usage: %s file no_of_vertices\n",argv[0]);
			  exit(10); }

	sscanf( argv[2],"%d",&nr_vert );

	cl_size = (int)pow( (double)nr_vert, alpha );
	p2 = ((double)nr_vert *prob-(double)cl_size)/(double)(nr_vert-cl_size);

	make_random_set( Clique, cl_size );
	empty_graph();
	complete_graph( Clique );
	rand_graph();

	write_graph_DIMACS( argv[1] );
}







SHAR_EOF
cat << 'SHAR_EOF' > showpreamble.c
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

SHAR_EOF
:	End of shell archive
exit 0
