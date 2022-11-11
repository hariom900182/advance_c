#include <stdio.h>

void main()
{
    int i = 0, j = 0, e = 3, f = 0, m = 0, c = 4, cc = 0;
start:
    if (i >= c)
        goto end;
bspace:

    if (e < 0)
        goto star;
    j = e;
continue_space:

    printf(" ");
    if (j == 0)
        goto star;
    j--;
    goto continue_space;
star:
    printf("*");
    m = cc;
mspace:
    if (m > 0)
    {
        printf(" ");
        m--;
        goto mspace;
    }
    if (i != 0)
        printf("*");
    printf("\n");
    i++;
    e--;
    cc += 2;
    goto start;

end:
    printf("**********\n");
}