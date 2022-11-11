#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    char name[30] = {'\0'};
    struct tm bday;
    const char *days[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    const char *months[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter you birthdate in d m yyyy format: ");
    scanf("%d %d %d", &bday.tm_mday, &bday.tm_mon, &bday.tm_year);
    bday.tm_mon -= 1;
    bday.tm_year -= 1900;
    if (mktime(&bday) == -1)
    {
        fprintf(stderr, "failed!");
        exit(1);
    }
    printf("Bday is %s %s %d %d\n", days[bday.tm_wday], months[bday.tm_mon], bday.tm_mday, bday.tm_year);
}