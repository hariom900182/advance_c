#include <stdio.h>
#include <stdlib.h>
int main()
{
    // hello
    char c = -10;
    printf("%d", c);
    if (__STDC__ == 1)
    {
        printf("compiler is ANSI standard\n");
    }
    printf("last compile date %s and time %s \n", __DATE__, __TIME__);
    printf("file name %s and line number %d \n", __FILE__, __LINE__);
    return 0;
}