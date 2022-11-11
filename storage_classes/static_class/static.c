#include <stdio.h>
extern void hello();
int fun()
{
    static int x;
    x++;
    return x;
}

void main()
{
    // printf("%d \n", fun());
    // printf("%d \n", fun());
    hello();
}