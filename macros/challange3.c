#include <stdio.h>

#define SQR(a) (a * a)
#define CUBE(a) ((SQR(a) * a))

void main()
{
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("SQR of number: %d\n", SQR(a));
    printf("CuBE of number: %d\n", CUBE(a));
}