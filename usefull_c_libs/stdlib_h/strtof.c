#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[] = "23.33  34.12 45.33", *end;
    float value1 = strtof(s, &end);

    float value2 = strtof(end, &end);
    float value3 = strtof(end, NULL);
    printf("converted value %f %f %f\n", value1, value2, value3);
}