#include <stdio.h>
#include "dec_to_bin.c"

void main()
{
    unsigned int n, c;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter shift count(0-31): ");
    scanf("%d", &c);
    if (c < 0 || c > 31)
    {
        printf("\nInvalid shift, range must be in 0-31\n");
        return;
    }

    printf("Bit value  before set: %d", ((n >> c) & 1));
    n = n | (1 << c);
    printf("\nSetting bit succussfull\n");
    printf("value = %d, binary = %lld\n", n, dec_to_bin(n));
}