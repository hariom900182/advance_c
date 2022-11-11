#include <stdio.h>
#include "stringfun.h"
int main(void)
{
    char *str = "hello world";
    char dest[255];
    char *src = "original text";
    display_str(str);
    printf("frequency = %d\n", char_freq(str, 'l'));
    printf("only alphanum = %s\n", only_alphanum(str));
    printf("length = %d\n", str_len(str));
    printf("Concated string = %s\n", str_con(str, "add me"));
    string_copy(dest, src);
    printf("copied string = %s\n", dest);
    printf("substring found at = %d\n", sub_string("my name is hariom", "name"));
}
