#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[] = "23  34", *end;
    int value1 = strtod(s, &end);

    int value2 = strtod(end, NULL);
    printf("converted value %d %d\n", value1, value2);
}