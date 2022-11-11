#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fp = fopen("read.txt", "r");
    if (fp == NULL)
    {
        puts("File not found\n");
        abort();
    }
    puts("closing the file");
    fclose(fp);
    return 0;
}