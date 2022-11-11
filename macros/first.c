#include <stdio.h>
#define PRNT(a, b) \
    printf("%f -- %f", a, b);

#define p(x, y) printf("%d", x##y);

#define declare_fun(name, type) \
    type name(type x)           \
    {                           \
        return x * x;           \
    }

// call macro outside for function
declare_fun(sqr, int);

void main()
{
    int xy = 10;
    // p(x, y);
    int w = sqr(10);
    printf("w = %d", w);
}
