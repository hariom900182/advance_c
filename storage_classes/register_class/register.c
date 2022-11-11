#include <stdio.h>
// register int x = 15; ---> register variables cannot be declared globally
void main()
{
    register int x = 15;
    int y = 5;
    // int *a;
    //  a = &x; ---> Cannot get address of register variable as it's in register(Err)
    register int *a;
    a = &y; //--> We can create pointer variables of type class register
    printf("%d \n", *a);
}