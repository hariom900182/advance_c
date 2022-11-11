#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

    time_t cal = time(NULL);
    char *t;
    struct tm *time_data;
    const char *days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    const char *months[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    // t = ctime(&cal);
    //  printf("date =%s\n", t);
    time_data = gmtime(&cal);

    printf("Today is %s %s %d %d\n", days[time_data->tm_wday], months[time_data->tm_mon], time_data->tm_mday, time_data->tm_year + 1900);
    printf("time is :  %d:%d:%d\n", time_data->tm_hour, time_data->tm_min, time_data->tm_sec);
    return 0;
}