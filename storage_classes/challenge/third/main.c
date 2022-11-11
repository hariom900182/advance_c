#include <stdio.h>

int count = 1;
extern void display();
void main()
{
    for (int i = 0; i < 5; i++)
    {
        display();
    }
}