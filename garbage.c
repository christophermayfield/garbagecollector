#include <stdio.h>   // For standard input/output functions
#include <stdlib.h>  // For standard library functions

typedef struct header {
    unsigned int    size;
    struct header   *next;
} header_t;


