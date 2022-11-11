// Perform calculations on complex numbers
#include <stdio.h>
#include <complex.h>
#include <math.h>
void main()
{
#ifdef __STDC_NO_COMPLEX__
    printf("Complex number types are not supported");
#else
    double complex cx = 1.0 + 2.0i;
    double complex dx = 2.0 + 3.0i;
    double complex result = cx + dx;
    double complex z1 = I * I;
    double complex z2 = pow(I, 2);
    // printf("\n  sum of complex number is %.2f%+.2fi \n", result);
    result = cx - dx;
    // printf("subtraction of complex number is %.2f%+.2fi \n", result);
    result = cx * dx;
    // printf("multiplication of complex number is %.2f%+.2fi \n", result);

    result = cx / dx;
    //  printf("division of complex number is %.2f%+.2fi \n", result);
    // printf("squire of complex number using IxI  %.2f%+.2fi \n", z1);
    // printf("squire of complex number using pow  %.2f%+.2fi \n", z2);
    printf("--------------");

#endif
}