#include <stdio.h>
#include <math.h>
long long dec_to_bin(int dec)
{
    long long bin;
    bin = 0;
    int i = 0;
    while (dec > 0)
    {
        int rem = dec % 2;
        dec = dec / 2;
        bin = bin + (pow(10, i) * rem);
        i++;
    }
    return bin;
}

// void main()
// {
//     int dec;
//     dec = 21;

//     printf("Binary  of %d is  = %lld\n", dec, dec_to_bin(dec));
// }