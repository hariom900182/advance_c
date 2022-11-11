#include <stdio.h>

inline static void sum(int x, int y)
{
    printf("sum = %d ", (x + y));
}

void main()
{
    sum(3, 4);
}
