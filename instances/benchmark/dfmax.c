/* dfmax.c
 * Semi-Exhaustive Greedy Independent Set
 * from Matula and Johri
 *
 * written October 22, 1983 by DSJ
 * modified February 20, 1987 for checkpointing
 * modified August 1988 to find maximum independent sets
 * modified April 1993 for new data structures, bounding
 * modified September 1993 for dimacs .b input
 * modified December 1993 to modify output to use as machine
 *    benchmark for DIMACS Challenge Volume by Michael Trick
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/times.h>
#define INT 32		/* computer word size */
#define CHARBITS 8
#define edge(x,y) (bitmap[y/CHARBITS][x] & (1<<(y%CHARBITS)))

#define NMAX 2400		/* maximum number of vertices handles */
#define MAX_NR_VERTICES		2400	/* = NMAX */
#define MAX_NR_VERTICESdiv8	300	/* = NMAX/8 */
#define BOOL	char
#define MAX_PREAMBLE 10000
#define REORDER

unsigned mask[INT] =
   {
   1, 1<<31, 1<<30, 1<<29, 1<<28, 1<<27, 1<<26, 1<<25, 1<<24,
   1<<23, 1<<22, 1<<21, 1<<20, 1<<19, 1<<18, 1<<17, 1<<16,
   1<<15, 1<<14, 1<<13, 1<<12, 1<<11, 1<<10, 1<<9, 1<<8,
   1<<7, 1<<6, 1<<5, 1<<4, 1<<3, 1<<2, 1<<1
   };  /* CAUTION - assumes 32 bit machine */

  /* graph input parameters */

int Nr_vert, Nr_edges;
BOOL Bitmap[MAX_NR_VERTICES][MAX_NR_VERTICESdiv8];
static char Preamble[MAX_PREAMBLE];
char masks[ 8 ] = { 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80 };

unsigned char bitmap[NMAX/CHARBITS+1][NMAX+1];
int N;			/* number of vertices in graph */
int mattype;
double dens, maxdist, dens1, dens2;
int chrom_num;		/* for fixed-chrom-num graphs */
double x_coord[NMAX+1], y_coord[NMAX+1];
int width;

int setlim;	/* size at which exhaustive search begins */

int vertex[NMAX];	/* array in which vertices reside and are moved */
int degree[NMAX];	/* vertex degrees with resp. to uncolored vertices */

int set[NMAX];		/* non-zero entries are members of current set */

int bestset[NMAX];	/* non-zero entries constitute currently best ind. set */
int bestsize;		/* size of current best set */
double bignum;		/* 2**31 */

void check();		/* checks to see that chosen color class is ind. set */
void readgraph();	/* reads input graph in bitmapform */

struct tms buffer;
int utimer, stimer, rtimer;
double utime, stime, rtime;

FILE *fopen();
char inputname[40];

main (argc,argv)
int argc;
char *argv[];
{
	int i,j,cand,newcand,dmax;
	FILE *inputfile;

	setbuf(stdout,NULL);
	times(&buffer);
	utimer = buffer.tms_utime;
	stimer = buffer.tms_stime;
	rtimer = time(0);

	/* Calculate bignum */
	bignum = (float)1024*1024;
	bignum *= 2048;

	/* read input */
	if (argc < 2) {
		printf("Usage: dfmax <filename> [setlim]\n");
		exit(1);
	}
	strcpy(inputname,argv[1]);
	if ((inputfile = fopen(argv[1], "r")) == NULL) {
		printf("Input graph does not exist");
		exit(1);
	}
	readgraph(inputfile);

	times(&buffer);
	utime = (buffer.tms_utime - utimer)/100.0;
	stime = (buffer.tms_stime - stimer)/100.0;
	rtime = (time(0) - rtimer)/1.0;

	/* initialize algorithmic parameters */
	setlim = 1;
	if (argc > 2) setlim = atoi(argv[2]);
	printf("DFMAX(%s)\n",argv[1]);

/*	printf("Input Time:  %8.2f (user)  %8.2f (sys)  %8.2f (real)\n", utime, stime, rtime);*/

	utimer = buffer.tms_utime;
	stimer = buffer.tms_stime;
	rtimer = time(0);

#ifdef REORDER

	for (i=1;i<=N;i++) {
		degree[i] = 0;
		for (j=1;j<=N;j++)
			if (!edge(i,j)) degree[i]++;
	}

	dmax = -1;
	for (i=1;i<=N;i++)
		if (degree[i] > dmax) {
			dmax = degree[i];
			cand = i;
		}
	vertex[N] = cand;

	for (j=N-1;j>=1;j--) {
		degree[cand] = -9;
		dmax = -1;
		for (i=1;i<=N;i++) {
			if (!edge(cand,i)) degree[i]--;
			if (degree[i] > dmax) {
				dmax = degree[i];
				newcand = i;
			}
		}
		vertex[j] = cand = newcand;
	}
#else
	for (j=1;j<=N;j++) vertex[j] = j;
#endif

	bestsize = 0;
	bestsize = maxind(N,setlim,vertex,1);
	

	times(&buffer);
	utime = (buffer.tms_utime - utimer)/100.0;
	stime = (buffer.tms_stime - stimer)/100.0;
	rtime = (time(0) - rtimer)/1.0;
	printf("%8.2f (user)  %8.2f (sys)  %8.2f (real)\n", utime, stime, rtime);
	printf ("Best:");
	for (i=1; i<=bestsize; i++) {
	    printf (" %d",bestset[i]);
	}
	printf ("\n\n");
	return(0);
	
}

int maxind(top,goal,array,depth)
register int top, goal,depth;
int *array;
{
	int newarray[NMAX];
	int i,v,u,w,z;
	int best, restbest, newgoal;
	unsigned *bitloc;
	int *pnew, *pold;
	int canthrow;

	if (top <= 1) {
		if (top == 0) depth--;
		if (depth > bestsize) {
			bestsize = depth;
			if (top == 1) set[bestsize] = array[top];
			for (i=1;i<=bestsize;i++) bestset[i] = set[i];
			check();
/*			printf("Size = %2d found\n",bestsize);*/
		}
		return(top);
	}
	best = 1;
	newgoal = goal-1;
	if (newgoal <= 1) newgoal = 1;
	for (i = top; i >= goal; i--) {
		pnew = newarray;
		w = array[i];
		set[depth] = w;
		canthrow = i - goal;
		pold = array+1;
		while (pold<array+i) {
			z = *pold++;
			if (edge(z,w)) {
				 *++pnew = z;
			} else {
			    if (canthrow == 0) goto breakout;
			    canthrow--;
			}
		}
		restbest = maxind(pnew-newarray,newgoal,newarray,depth+1);
		if (restbest >= newgoal) {
			best = newgoal = restbest+1;
			goal = best+1;
		}
		if (top == N) {
			times(&buffer);
			utime = (buffer.tms_utime - utimer)/100.0;
			stime = (buffer.tms_stime - stimer)/100.0;
			rtime = (time(0) - rtimer)/1.0;
/*			printf("N = %3d best = %2d %8.2f (user)  %8.2f (sys)  %8.2f (real)\n",i,best, utime, stime, rtime);*/
		}
    breakout:;
	}
	return(best);
}

BOOL get_edge( i, j )
int i,j;
{
	int byte, bit;
	char mask;
	int k;

	if (i<j) {
		k = i;
		i = j;
		j = k;
	}
	
	bit  = 7-(j & 0x00000007);
	byte = j >> 3;
	
	mask = masks[bit];
	return( (Bitmap[i][byte] & mask)==mask );
}

void readgraph(fp) 
FILE *fp;
{
   int i,j;
   int length = 0;
   unsigned temp;

	if (!fscanf(fp, "%d\n", &length))
	  { printf("ERROR: Corrupted preamble.\n"); exit(10); }

	if(length >= MAX_PREAMBLE)
	  { printf("ERROR: Too long preamble.\n"); exit(10); }
		   
	fread(Preamble, 1, length, fp);
	Preamble[length] = '\0';
	
	if (!get_params())
		  { printf("ERROR: Corrupted preamble.\n"); exit(10); }

	if (Nr_vert >NMAX) {
		printf("Too many vertices! Recompile with NMAX > %d\n",
			Nr_vert);
		exit(0);
	}

	for ( i = 0
		 ; i < Nr_vert && fread(Bitmap[i], 1, (int)((i + 8)/8), fp)
		 ; i++ );

	fclose(fp);

   N = Nr_vert;

   for (i = 0; i < N; i++)
       for (j = 0; j < N; j++)
	   if (get_edge(i, j))
	       bitmap[(j+1)/CHARBITS][i+1] |= (1 << ((j+1) % CHARBITS));

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

void check ()
{
	/* checks that the vertices with color K are an independent set */
	register int i,j;

	for (i=1;i<=bestsize;i++)
		for (j=i+1;j<=bestsize;j++)
			if (!edge(bestset[i],bestset[j]))
				printf ("Edge in set\n");
}
