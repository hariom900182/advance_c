#include <stdio.h>

void modify(int *p)
{
    *p = *p + 1;
}
int result(int *p)
{
    return *p;
}
void main()
{
    int sum = 9;
    int x = (modify(&sum), sum); // comma operator call the modify function and assign second value (sum) to x
    int y = (10, 20);            // 20 will be assigned to y first one will discard
    printf("%d \n", x);          // comma operator between format string and parameter

    // two statement as 1 with comma operator
    printf("hllo"),
        printf("hariom");
}