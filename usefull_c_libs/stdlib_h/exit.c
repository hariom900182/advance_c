#include <stdio.h>
#include <stdlib.h>

FILE *openfile(const char *file)
{
    FILE *infile;
    if ((infile = fopen(file, "r")) == NULL)
    {
        fprintf(stderr, "can't open file");
        exit(EXIT_FAILURE);
    }
    return infile;
}