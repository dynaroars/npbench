/**************************************************************************
  File:    graph
  Author:  Andreas Ernst
  Date:    29/4/98
  Purpose: Create a random undirected graph with distances
	   USAGE cluster <n nodes> <density> [-R <rand seed>]
	   OUTPUT table of numbers representing lower triangular matrix
	   of a distance matrix for a set of nodes. Distances are between
	   1 & 1000 for connected nodes and n_nodes * 1000 for unconnected
	   nodes
**************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <random.h> 


void main(int argc,char **argv)
{ int i,j,n,dist,c;
  double density,r;
  long seed=0;
  short **con;
  short *labeled;
  
  if((argc != 3 && argc != 5) || (density=atof(argv[2])) >1 || density < 0 ||
     (n=atoi(argv[1])) <= 1){
    fprintf(stderr,"USAGE: %s <number of nodes> <density> [-R <rand seed>]\n"
	    "Density is a fraction in (0,1] giving the proability of any of\n"
	    "the n*(n-1)/2 possible edges being in the graph\n"
	    "OUTPUT table of numbers representing lower triangular matrix\n"
	    "of a distance matrix for a set of n nodes with costs in 1--1000\n"
	    "Disconnected nodes have a cost of n*1000\n",
	    argv[0]);
    exit(1);
  }
  if(argc == 5){
    seed = atol(argv[1]);
    seed_all(seed);
  }else
    seed = seed_time();		/* initialise random number generator */
  con = (short **)malloc(n * sizeof(short *));
  labeled = (short *)malloc(n * sizeof(short));
  do{	   	    /* keep generating until a connected graph exists */
    for(i=0;i<n;i++) labeled[i] = FALSE;
    labeled[n-1] = TRUE;
    for(i=n-1;i>0;i--){
      con[i] = (short *)malloc(i * sizeof(short));    
      for(j=0;j<i;j++){
	r = rand2();
	con[i][j] = (r < density); /* nodes i & j connected */
	if(labeled[i] && con[i][j]) labeled[j] = TRUE;
	if(labeled[j] && con[i][j]) labeled[i] = TRUE;
      }
    }
    do{		/* check if there are any other reachable unlabeled nodes */
      c = FALSE;
      for(i=0;i<n;i++)
	for(j=0;j<i;j++)
	  if(con[i][j]){
	    if(!labeled[i] && labeled[j]) c = labeled[i] = TRUE;
	    if(labeled[i] && !labeled[j]) c = labeled[j] = TRUE;
	  }
    }while(c);
    c=TRUE;			/* connected */
    for(i=0;i<n;i++) c = (c && labeled[i]);
  }while(!c);			/* try again if graph is not connected */
 
  for(i=0;i<n;i++){
    for(j=0;j<i;j++)
      printf("%d%c",((con[i][j]) ? irand2(999)+1 : (n*1000)),
	     ( ((j+1)%10) ? ' ' : '\n'));
    printf("\n");
  }
}

/* Local Variables: */
/* mc--compile-command: "gcc -g -o graph -I~/lib/include graph.c -L$HOME/lib -late -lm" */
/* End: */
