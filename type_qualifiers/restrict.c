#include <stdio.h>

void fun(int *x, int *y, int *restrict z)
{
    *z += 10;
    *x += *z;
    *y += *z;
}
void main()
{
    int x = 10, y = 20, z = 30;
    fun(&x, &y, &z);
    printf("%d %d %d", x, y, z);
}