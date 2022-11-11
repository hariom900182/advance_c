#include "headers/other.h"
#include <stdio.h>

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