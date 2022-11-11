#include <stdio.h>
#include "bin_to_dec.c"
#include "dec_to_bin.c"

void main()
{
    short int x = 12; // 1010
    int y = 5;        // 0101

    printf("%lld\n", dec_to_bin((x & y)));
    printf("%lld\n", dec_to_bin((x | y)));
    printf("%lld\n", dec_to_bin((x ^ y)));
    printf("%lld\n", dec_to_bin(~(x)));

    printf("%lld\n", dec_to_bin((y << 1)));
}