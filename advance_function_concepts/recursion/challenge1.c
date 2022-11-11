#include <stdio.h>
#include <string.h>

int sum_n(int min, int max)
{
    if (min < max)
        return min + sum_n(min + 1, max);
    else
        min;
}
void main()
{
    char str[20];
    int min = 0, max = 0;
    printf("\nEnter range: ");
    scanf("%s", str);
    sscanf(str, "%d:%d", &min, &max);
    printf("Sum of range %d:%d is = %d", min, max, sum_n(min, max));
}