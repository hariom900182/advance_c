#include <stdio.h>
#include <assert.h>
#include <limits.h>
static_assert(CHAR_BIT == 16, "16 bit char falsely assumed"); // more supported in C++
int main(void)
{
    int y = 0;
    puts("char is 16 bits");
    // for (int i = 0; i < 20; i++)
    // {
    //     assert(i < y);
    // }
    return 0;
}