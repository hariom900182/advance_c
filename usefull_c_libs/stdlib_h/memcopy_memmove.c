#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

void display(int ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void main()
{
    int source[SIZE] = {1,
                        2,
                        3,
                        4,
                        5};
    int target[SIZE];
    int t[3];
    memcpy(target, source, SIZE * sizeof(int));
    display(target, SIZE);
    memmove(target + 2, target, 3 * sizeof(int));
    display(target, 5);
}