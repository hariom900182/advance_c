#include <stdio.h>
#include <math.h>
int bin_to_dec(long long bin)
{
    int sum = 0;
    double i;
    i = 0;
    while (bin > 0)
    {
        double pow2 = pow(2, i);
        sum = sum + ((bin % 10) * (int)pow2);
        bin = bin / 10;
        i++;
    }
    return sum;
}

// void main()
// {
//     long long bin;
//     bin = 1111;

//     printf("Decimal of %lld is  = %d\n", bin, bin_to_dec(bin));
// }