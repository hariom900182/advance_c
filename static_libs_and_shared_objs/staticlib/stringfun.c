#include <stdio.h>
#include <stdlib.h>
void display_str(char *str)
{
    printf("\n%s\n", str);
}

int char_freq(const char *str, const char c)
{
    int i = 0;
    int f = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            f++;
        i++;
    }
    return f;
}
char *only_alphanum(const char *str)
{
    char *fstr = malloc(255);
    int i = 0;
    int c = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            fstr[c++] = str[i];
        i++;
    }

    fstr[++c] = '\0';
    return fstr;
}
int str_len(const char *str)
{
    int i = 0;
    int c = 0;
    while (str[i] != '\0')
    {
        c++;
        i++;
    }
    return c;
}
char *str_con(const char *s1, const char *s2)
{
    char *str = malloc(255);
    int i = 0;
    int c = 0;
    while (s1[i] != '\0')
    {
        str[c++] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        str[c++] = s2[i];
        i++;
    }
    str[++c] = '\0';
    return str;
}

void string_copy(char *destination, const char *source)
{
    // destination = malloc(255);
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i++] = source[i];
    }
    destination[i] = '\0';
}

int sub_string(const char *str, const char *substr)
{
    int strc = str_len(str);
    int subc = str_len(substr);
    // printf("%d");
    int c, j;
    if (strc < subc)
        return -1;
    for (int i = 0; i < strc && (i + subc) <= strc; i++)
    {
        c = i;
        for (j = 0; j < subc; j++)
        {
            if (str[c++] != substr[j])
                break;
        }
        if (j == subc)
        {
            return i;
        }
    }
    return -1;
}