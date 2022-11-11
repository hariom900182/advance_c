#include <stdio.h>
#include <malloc.h>
#include <string.h>
// //pointer by value
// void foo(int *ptr)
// {
//     int a = 5;
//     ptr = &a; // dont change actual value in main pointer pointing to
// }

// pointer by address
void foo(int **ptr)
{
    int a = 5;
    *ptr = &a; // dont change actual value in main pointer pointing to
}

void strfoo(char **ptr)
{
    *ptr = malloc(100);
    strcpy(*ptr, "hariom");
}

int main(void)
{
    // int *ptr;
    char *pstr;
    // ptr = malloc(sizeof(int));
    // *ptr = 10;
    // foo(ptr); //by val
    // foo(&ptr); // by ref
    strfoo(&pstr);
    printf("%s\n", pstr);
    free(pstr);
}