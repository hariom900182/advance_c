#include <stdio.h>

#define SUM(a, b) \
    a + b;

void main()
{
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    int result = SUM(a, b);
    printf("%d", result);
}