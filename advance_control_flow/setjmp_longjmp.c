#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
jmp_buf buf;

void error_recovery()
{
    printf("Divide by zero error\n");
    longjmp(buf, 42);
    // code written below above will not execute
}

void main()
{
    int x;
    int y;

    printf("Enter value of x: ");
    scanf("%d", &x);
    int i = setjmp(buf);
    printf("Enter value of y: ");
    scanf("%d", &y);
    if (y == 0)
    {
        error_recovery();
    }
    else
    {
        printf("result = %d ", x / y);
    }
}
