// Read variable length array and print sum

#include <stdio.h>

void main()
{
    // INcluded VLA in c99 n c11 but it's optional so check __STDC_NO_VLA__ before use if it's defined then not supported
#ifdef __STDC_NO_VLA__
    printf("Variable length array's are not supported");
#else
    size_t size;
    printf("Enter size of array: ");
    scanf("%zd", &size);
    int sum = 0;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter value of element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum = %d \n", sum);

#endif
}