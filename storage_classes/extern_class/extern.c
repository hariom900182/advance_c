#include <stdio.h>

int i = 5;
extern void foo();
void main()
{
    printf("%d ", i);
    foo();
    printf("%d ", i);
}