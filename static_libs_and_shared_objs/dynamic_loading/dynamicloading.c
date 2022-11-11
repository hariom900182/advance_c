#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(void)
{
    void *handle = NULL;
    void (*display_str)(const char *);
    int (*char_freq)(const char *str, const char c);
    // char *(*only_alphanum)(const char *);
    // int (*str_len)(const char *);
    // char *(*str_con)(const char *, const char *);
    // void (*string_copy)(char *, const char *);
    // int (*sub_string)(const char *, const char *);
    char *error = NULL;
    handle = dlopen("/home/mr/work/advance_c/static_libs_and_shared_objs/dynamiclib/libstrlib.so", RTLD_LAZY);
    if (!handle)
    {
        fputs(dlerror(), stderr);
        exit(1);
    }
    dlerror();
    display_str = dlsym(handle, "display_str");
    char_freq = dlsym(handle, "char_freq");
    if ((error = dlerror()) != NULL)
    {
        fputs(error, stderr);
        exit(1);
    }
    (*display_str)("hello hariom");
    printf("character(l) count:  %d\n", (*char_freq)("hello hariom", 'l'));
    dlclose(handle);
    return 0;
}