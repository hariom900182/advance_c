// sum of a number that take value from previous call to sum the current val

#include <stdio.h>

int sum(int val)
{
    static int sum = 0;
    sum = sum + val;
    return sum;
}

void main()
{
    printf("sum = %d \n", sum(10));
    printf("sum = %d \n", sum(20));
    printf("sum = %d \n", sum(30));
}