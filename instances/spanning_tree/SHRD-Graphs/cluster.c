/**************************************************************************
  File:    cluster
  Author:  Andreas Ernst
  Date:    17/10/97
  Purpose: Create clustered distance files for DCMST
	   USAGE cluster <dimension> <n nodes> 
	   OUTPUT table of numbers representing lower triangular matrix
	   of a distance matrix for a set of nodes where the first node
	   is at the origin and all others are split over 2 * dimension
	   clusters in each direction along the coordinate axis.
**************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <random.h> 

int distance(short *a,short *b,int dim)
{ int i;
  double d=0;
  for(i=0;i<dim;i++)
    d += (a[i]-b[i]) * (a[i]-b[i]);
  return (int)sqrt(d);
}


void main(int argc,char **argv)
{ int i,j,n,c,dim;
  long seed=0;
  short **pts;
  
  if(argc != 3 || (dim=atoi(argv[1])) <=1 || (n=atoi(argv[2])) <= 1 ||
     n < 2*dim+1){
    fprintf(stderr,"USAGE: %s <dimension> <number of nodes>\n"
	    "OUTPUT table of numbers representing lower triangular matrix\n"
	    "of a distance matrix for a set of nodes where the first node\n"
	    "is at the origin and all others are split over 2 * dimension\n"
	    "clusters in each direction along the coordinate axis.\n"
	    "NOTE: in the special case where dimencions==2 the coordinates\n"
	    "      are written out rather than the distances\n",
	    argv[0]);
    exit(1);
  }
  pts = (short **)malloc(n * sizeof(short *));
  for(i=0;i<n;i++) pts[i] = (short *)malloc(dim * sizeof(short));
  for(c=0;c<dim;c++) pts[0][c] = 0; /* first pt at origin */
  seed = seed_time();		/* initialise random number generator */
  for(i=1;i<n;i++)
    for(c=0;c<dim;c++){
      pts[i][c] = 0;
      if( i%dim == c )		/* cluster along this axis */
	pts[i][c] = (i%(2*dim) == c) ? 500 : -500;
      pts[i][c] += irand2(50);	/* random perturbation */
    }
  if(dim == 2){			/* write coordinate file */
    for(i=0;i<n;i++)
      printf("%d %d\n",pts[i][0],pts[i][1]);
  }else
    for(i=0;i<n;i++)
      for(j=0;j<i;j++)
	printf("%d%c",distance(pts[i],pts[j],dim),( ((j+1)%10) ? ' ' : '\n'));
}

/* Local Variables: */
/* mc--compile-command: "gcc -g -o cluster -I~/lib/include cluster.c -L~/lib -late -lm" */
/* End: */
