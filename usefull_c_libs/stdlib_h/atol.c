#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[] = "34523542542";
    long value = atol(s);
    printf("converted value %ld\n", value);
}