/**************************************************************************
  File:    hard
  Author:  Andreas Ernst
  Date:    22/10/97
  Purpose: Create random distance files
	   USAGE hard <n nodes>
	   OUTPUT table of numbers representing lower triangular matrix
	   of a distance matrix where distance (i,j) is given by
	   \min{i,j} + random perturbation
**************************************************************************/
#include <stdio.h>
#include <random.h>

void main(int argc,char **argv)
{ int i,j,n;
  if(argc != 2 || (n=atoi(argv[1])) <= 1){
    fprintf(stderr,"USAGE: %s <number of nodes>\n"
	    "OUTPUT: table of numbers representing the lower triangule of\n"
	    "        a distance matrix where distance (i,j) is given by\n"
	    "        min{i,j} + random perturbation\n",argv[0]);
    exit(1);
  }
  seed_time();
  for(i=0;i<n;i++)
    for(j=0;j<i;j++)
      printf("%d%c",1+20*j+irand2(18),( ((i+j+1)%10) ? ' ' : '\n'));
  printf("\n");
}

/* Local Variables: */
/* mc--compile-command: "gcc -o hard -I/home/andreas/lib/include hard.c -L/home/andreas/lib -late -lm" */
/* End: */
