#include <stdio.h>
// auto int x; // compiler gives error if defined outside of the function global vars cannot be auto
void main()
{
    auto int i = 9;
    {
        auto int i;

        printf("%d", i);
    }
    // printf("%d", i);

    // print_other_message();
}