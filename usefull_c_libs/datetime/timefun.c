#include <stdio.h>
#include <time.h>
void main()
{
    time_t cal_time_start = time(NULL); // initial calendar time
    time_t cal_time_end;                // time(NULL); // initial calendar time

    printf("intital calendar time %lld", (long long)cal_time_start);
    for (int i = 0; i < 1000000000; i++)
    {
        ;
    }
    cal_time_end = time(NULL);
    printf("total calendar time is %lf\n", difftime(cal_time_end, cal_time_start));
}