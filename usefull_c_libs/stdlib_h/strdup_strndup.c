#include <stdio.h>
#include <string.h>

void main()
{
    char *str = "hariom";
    char *dest = NULL;
    dest = strndup(str, 5);
    printf("duplicated string is %s\n", dest);
}
