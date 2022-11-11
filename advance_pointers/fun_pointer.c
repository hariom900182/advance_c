#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

void print_menu();

typedef int funtype(int, int);

int main()
{
    funtype *fun;
    int ch, a, b;
    funtype *arr[] = {&sum, &sub, &mul, &div};
    do
    {

        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if (ch != 5)
        {
            printf("Enter first value: ");
            scanf("%d", &a);
            printf("Enter second value: ");
            scanf("%d", &b);
            printf("\nResult = %d", arr[ch - 1](a, b));
        }
    } while (ch > 0 && ch < 5);

    return 0;
}

void print_menu()
{
    printf("\n\nPress 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    printf("Press 5 for Exit\n\n");
}
int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}