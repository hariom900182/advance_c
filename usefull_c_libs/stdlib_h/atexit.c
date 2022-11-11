#include <stdio.h>
#include <stdlib.h>

void sign_of(void);
void bad_input(void);

int main()
{
    int val;
    atexit(sign_of);
    puts("Enter value: ");
    scanf("%d", &val);
    if (val != 1)
    {
        puts("Invalid input");
        atexit(bad_input);
        exit(EXIT_FAILURE);
    }
    return 0;
}

void sign_of(void)
{
    puts("\nBy By\n");
}
void bad_input(void)
{
    puts("\nvalue does not support\n");
}