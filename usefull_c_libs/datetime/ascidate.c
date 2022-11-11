#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    time_t time_ptr;
    time(&time_ptr);
    printf("%s\n", asctime(localtime(&time_ptr)));
}