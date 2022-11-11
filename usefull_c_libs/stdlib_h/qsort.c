#include <stdio.h>
#include <stdlib.h>

int comp_fun(const void *p1, const void *p2);

int main(void)
{

    int data[5] = {3, 1, 4, 2, 7};
    qsort(data, 5, sizeof(int), comp_fun);
    for (int i = 0; i < 5; i++)
        printf("%d\n", data[i]);
    return 0;
}

int comp_fun(const void *p1, const void *p2)
{
    const int i1 = *(const int *)p1;
    const int i2 = *(const int *)p2;
    return i1 - i2;
}