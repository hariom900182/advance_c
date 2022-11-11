#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[] = "23.2";
    float value = atof(s);

    printf("converted value %.2f\n", value);
}