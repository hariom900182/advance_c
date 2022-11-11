#include <stdio.h>

void array(size_t size)
{
    char arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 'A' + i;
        printf("%c\n", arr[i]);
    }
    printf("------done--------\n");
}

void multi_array(size_t rows, size_t cols, int arr[rows][cols]) // rows and cols must be before the array parameter otherwise compiler will give rror
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = i * j;
        }
    }
    printf("\n----------------OK---------------\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void main()
{
// INcluded VLA in c99 n c11 but it's optional so check __STDC_NO_VLA__ before use if it's defined then not supported
#ifdef __STDC_NO_VLA__
    printf("Variable length array's are not supported");
#else
    array(5);
    array(10);
    size_t rows = 3;
    size_t cols = 3;
    int array[rows][cols];
    multi_array(rows, cols, array);

#endif
}