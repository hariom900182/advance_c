#include <stdio.h>
#include <stdlib.h>
#define IS_CHAR(c) (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? 1 : 0)
#define IS_UPPER(c) ((IS_CHAR(c)) == 1 && c >= 65 && c <= 90 ? 1 : 0)
#define IS_LOWER(c) ((IS_CHAR(c)) == 1 && c >= 97 && c <= 122 ? 1 : 0)

void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("IS_UPPER  = %s \n", IS_UPPER(c) ? "true" : "false");
    printf("IS_LOWER  = %s \n", IS_LOWER(c) ? "true" : "false");
}