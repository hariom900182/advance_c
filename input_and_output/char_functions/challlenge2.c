#include <stdio.h>

void main(int argc, char **args)
{

    FILE *fp, *fp1;
    char ch;
    if (args[1] != NULL)
    {
        fp = fopen(args[1], "r");
        fp1 = fopen("output.txt", "w");
        if (fp == NULL)
        {
            printf("\nInvalid file name\n");
        }
        else
        {
            while ((ch = getc(fp)) != EOF)
            {
                if (ch >= 97 && ch <= 122)
                {
                    ch = ch - 32;
                }
                putc(ch, fp1);
            }
        }
        fclose(fp);
        fclose(fp1);
        remove(args[1]);
        rename("output.txt", args[1]);
    }
    else
    {
        printf("\nNo file name supplied!\n");
    }
}