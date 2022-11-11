#ifndef _STRINGFUN_H
#define _STRINGFUN_H

void display_str(const char *);
int char_freq(const char *str, const char c);
char *only_alphanum(const char *);
int str_len(const char *);
char *str_con(const char *, const char *);
void string_copy(char *destination, const char *source);
int sub_string(const char *str, const char *substr);
#endif