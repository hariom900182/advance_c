#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(0));
    for (int i = 0; i < 5; i++)
        printf("%d\n", rand() % 11 + 1);
    return 0;
}