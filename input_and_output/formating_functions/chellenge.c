#include <stdio.h>
#include <stdlib.h>

#define MAX 255

void main()
{
    FILE *fp;
    int val;
    char buf[MAX];
    if ((fp = fopen("test.txt", "r")) == NULL)
    {
        fprintf(stderr, "Error in file open: %s", "test.txt");
        exit(EXIT_FAILURE);
    }
    while (fscanf(fp, "%s", buf) != EOF)
    {
        val = atoi(buf);
        if ((val % 2) == 0)
        {
            fprintf(stdout, "%d is even number\n", val);
        }
        else
        {
            fprintf(stdout, "%d is odd number\n", val);
        }
        int half = val / 2;
        int isprime = 1;
        if (val > 0)
        {
            for (int i = 2; i < half; i++)
            {
                if ((val % i) == 0)
                {
                    isprime = 0;
                    break;
                }
            }
            if (isprime)
                fprintf(stdout, "%d is prime number\n", val);
        }
    }
}