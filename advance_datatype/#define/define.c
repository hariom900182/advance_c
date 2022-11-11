#include <stdio.h>
#define TWO_PI 2.0 * 3.1416
#define int_ptr int * // We can use define instead of typedef but compiler does'nt check for error it's preprocessor's part

void main()
{
    int_ptr x;
    printf("%f  ", TWO_PI);
}