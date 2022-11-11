#include <stdio.h>
#include <malloc.h>

char stack[30];
int top = 0;

char *reverse(char *ptr)
{
    static int i = 0;
    static char rev[100];
    if (*ptr)
    {
        reverse(ptr + 1);
        rev[i++] = *ptr;
    }
    return rev;
}
void main()
{
    char *str, *rev;
    str = malloc(30 * sizeof(char));
    printf("Enter string to reverse: ");
    scanf("%s", str);
    rev = reverse(str);
    printf("Original string = %s \n", rev);
}
