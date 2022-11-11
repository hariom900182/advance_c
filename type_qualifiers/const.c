#include <stdio.h>

void main()
{
    const int a = 5;
    int x = 9;
    int *const pt = &x;  // constant pointer
    int const *ptr = &a; // constant int value
    const int *ptr;      // same as int const *ptr
    printf("%d", a);
    // a = 8;
    ptr = pt;
    printf("%d", *ptr);
}
