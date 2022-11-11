#include <stdio.h>
#include <stdnoreturn.h>
#include <stdlib.h>
noreturn void prnthello();

void main()
{
    prnthello();
}

noreturn void prnthello()
{
    printf("hello world");
    exit(0); // if I comment this line compiler will give error that noreturn function does return
}