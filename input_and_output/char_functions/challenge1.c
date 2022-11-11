#include <stdio.h>

void main(int argc, char **args)
{
    char ch;
    int w_count = 0, c_count = 0;
    if (args[1] != NULL)
    {
        FILE *fp = fopen(args[1], "rw");
        if (fp)
        {
            while ((ch = getc(fp)) != EOF)
            {
                if (ch != ' ' && ch != '\n')
                    c_count++;
                else
                    w_count++;
            }
        }
        fclose(fp);
    }
    else
    {
        while ((ch = getc(stdin)) != EOF)
        {
            if (ch != ' ' && ch != '\n')
                c_count++;
            else
                w_count++;
        }
    }

    // if (c_count > 0)
    //     w_count++;

    printf("character count: %d \n", c_count);
    printf("word count: %d\n", w_count);
}