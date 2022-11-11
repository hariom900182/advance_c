#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
void main(int argc, char **argv) // first arg = filename, second = char
{
    char *ptr, *sub;
    size_t size = 255; // max line size
    ptr = malloc(size * sizeof(char));
    if (argc == 1)
    {
        puts("No filename supplied!");
        exit(1);
    }
    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        fprintf(stderr, "File open error");
        exit(1);
    }
    while (getline(&ptr, &size, fp) != EOF)
    {
        sub = strstr(ptr, argv[2]);
        if (sub != NULL)
            fputs(ptr, stdout);
    }
}
