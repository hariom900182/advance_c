#include <stdio.h>
#include <malloc.h>
void call_fun()
{

    // ptr = malloc(sizeof(int));
    for (int i = 0; i < 1000000000; i++)
        ;
    printf("inside call_fun\n");
}
void main()
{
    printf("inside main\n");
    for (int i = 0; i < 1000000000; i++)
        ;
    call_fun();
    printf("main ended");
}