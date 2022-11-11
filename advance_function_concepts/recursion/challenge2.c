#include <stdio.h>

int gcd(int x, int y, int start)
{

    if ((x % start) == 0 && (y % start) == 0)
        return start;
    else
        return gcd(x, y, --start);
}

void main()
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("GCD = %d\n", gcd(x, y, (x < y ? x : y)));
}
