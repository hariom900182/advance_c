#include <stdio.h>
#include <time.h>
void main()
{
    time_t start = 0, end = 0;
    double totaltime = 0;
    start = clock();
    for (int i = 0; i < 1000000000; i++)
    {
        ;
    }
    end = clock();
    totaltime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("total cpu time is %lf\n", totaltime);
}