#include <stdio.h>

#define int_ptr int *

typedef int *i_pointer; // new type defined for int pointer

typedef int int_4;

int_ptr o, k; // same as o is int * and k is int define only replaces int_ptr with int *

i_pointer t, v; // same as int *t and int *v  (that's difference between typedef and define)

void main()
{
    int_4 q;
    i_pointer x;  //--> same as int * x;
    i_pointer *w; // --> same as double pointer int **w
}