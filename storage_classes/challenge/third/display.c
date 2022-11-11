#include <stdio.h>
extern int count;
void display()
{
    printf("%d ", count++);
}