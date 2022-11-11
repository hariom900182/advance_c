#include <stdio.h>
static double y; // global variable accesible inside this file only
float w;         // global variable accessible in entire program

// function accessible only in this file
static void hello()
{
    printf("hello");
}

void main()
{
    int x;          // Variable which is local and temporary
    static int v;   // local variable with permanent storage
    register int u; // register int variable
}