#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int v = 5;
    int *pv;
    int **ppv;
    pv = &v;
    ppv = &pv;

    printf("address of vdef: %p \n", &v);
    printf("address of v by ptr: %p \n", pv);
    printf("address of v by double ptr: %p \n", *ppv);

    printf("address of pv by ptr: %p \n", pv);
    printf("address of pv by double ptr: %p \n", *ppv);
    printf("address of ppv : %p \n", ppv);

    printf("value of vdef: %d \n", v);
    printf("value of v by ptr: %d \n", *pv);
    printf("value of v by double ptr: %d \n", **ppv);
}