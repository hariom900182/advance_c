#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char cmd[50];
    puts("Enter cmd: ");
    scanf("%s", cmd);
    system(cmd);
    return 0;
}