// Read the array and print
#include <stdio.h>
#include <malloc.h>

struct MyArray
{
    int length;
    int list[]; // var length aray must be last member of the struct, at most only 1 var. length member is allowed, Cannot be used as member of other struct
};

void main()
{
    size_t size;
    struct MyArray *p;
    printf("Enter size of an array: ");
    scanf("%zd", &size);
    p = malloc(sizeof(struct MyArray) + size * (sizeof(int)));
    p->length = size;
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element value: ", (i + 1));
        scanf("%d", &p->list[i]);
    }
    printf("List: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", p->list[i]);
    }
    printf("\n");
}