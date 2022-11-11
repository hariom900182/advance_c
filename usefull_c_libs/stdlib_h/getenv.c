#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void main()
{
    char *str;
    str = getenv("MR");
    assert(str != NULL);
    printf("value of home: %s\n", str);
}