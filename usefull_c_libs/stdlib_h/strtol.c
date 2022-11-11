#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[] = "345234523 this is test", *end;
    long value1 = strtol(s, &end, 10);
    printf("converted value %ld\n", value1);
    printf("string: |%s|", end);
    return 0;
}