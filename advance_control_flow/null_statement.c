#include <stdio.h>

void main()
{

    int i;
    char str[] = "hello my name is hariom\n";
    for (i = 0; str[i] != 'r' && str[i] != '\n'; i++)
        ; // NULL statement
    printf("\n%d\n ", i);
}