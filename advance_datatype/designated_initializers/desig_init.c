#include <stdio.h>

struct Item
{
    int x;
    int y;
}

main()
{
    // we can initialize few of elements in any order rest will be assigned as 0
    int arr[20] = {[2] = 20, [1] = 45, [10 ... 15] = 3};
    //  can be written as below
    // int arr[20] = {[2] 20, [1] 45, [10 ... 15] 3};
    int arr1[] = {[2] = 20, [1] = 45, [10 ... 15] = 3}; // Size of array will be equal to maximum index in initialization

    // We can assign struct object as well in any order;
    struct Item it = {.x = 3};
    // Can be written as below
    // struct Item itx = {x : 34};

    // We can initial array of structure as well
    struct Item itms[5] = {[2].x = 23, [1].y = 45};

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d - %d \n", itms[i].x, itms[i].y);
    }
    printf("\n");
}