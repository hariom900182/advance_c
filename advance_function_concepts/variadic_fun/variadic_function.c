#include <stdio.h>
#include <stdarg.h>

int sum_of_args(int a, ...)
{
    va_list args;
    va_list args_c;
    int sum = 0;
    int even = 0;
    va_start(args, a);
    va_copy(args_c, args);
    for (int i = 0; i < a; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);
    for (int i = 0; i < a; i++)
    {
        if (va_arg(args_c, int) % 2 == 0)
        {
            even++;
        }
    }
    va_end(args_c);
    printf("even count = %d\n", even);
    return sum;
}

void main()
{
    int x = sum_of_args(4, 1, 2, 3, 4);
    printf("sum = %d\n", x);
    x = sum_of_args(6, 1, 2, 3, 4, 5, 6);
    printf("sum = %d\n", x);
}
