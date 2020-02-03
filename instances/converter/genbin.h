#ifndef GENBIN 
#define GENBIN

#include <stdio.h>

/* If you change MAX_NR_VERTICES, change MAX_NR_VERTICESdiv8 to be 
the 1/8th of it */

#define MAX_NR_VERTICES		10000
#define MAX_NR_VERTICESdiv8	1250

#define BOOL	char

int Nr_vert, Nr_edges;
BOOL Bitmap[MAX_NR_VERTICES][MAX_NR_VERTICESdiv8];

char masks[ 8 ] = { 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80 };

#define MAX_PREAMBLE 10000
static char Preamble[MAX_PREAMBLE];

#endif
