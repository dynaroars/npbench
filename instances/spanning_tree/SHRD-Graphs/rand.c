/**************************************************************************
  File:    rand
  Author:  Andreas Ernst
  Date:    17/10/97
  Purpose: Create random distance files
	   USAGE rand <n nodes>
	   OUTPUT table of numbers representing lower triangular matrix
	   of a totaly random distance matrix.
**************************************************************************/
#include <stdio.h>
#include <random.h>

void main(int argc,char **argv)
{ int i,n;
  if(argc != 2 || (n=atoi(argv[1])) <= 1){
    fprintf(stderr,"USAGE: %s <number of nodes>\n"
	    "OUTPUT: table of numbers representing lower triangular matrix\n"
	    "of a totaly random distance matrix.\n",argv[0]);
    exit(1);
  }
  seed_time();
  for(i=0;i<n*(n-1)/2;i++)
    printf("%d%c",irand2(500)+1,( (i%10) ? ' ' : '\n'));
}

/* Local Variables: */
/* mc--compile-command: "gcc -o rand -I/home/andreas/lib/include rand.c -L/home/andreas/lib -late -lm" */
/* End: */
