#include <stdio.h>

void main()
{
    void *ptr;
    int x = 5;
    float y = 4.3;
    char z = 'c';
    ptr = &x;
    printf("%d\n", *(int *)ptr);

    ptr = &y;
    printf("%.2f\n", *(float *)ptr);

    ptr = &z;
    printf("%c\n", *(char *)ptr);
}