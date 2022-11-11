#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void div_by_zero_handler(int sig);

int main(void)
{
    int result = 0;
    int a = 0,
        b = 0;
    void (*sigHandler)(int);
    sigHandler = signal(SIGFPE, div_by_zero_handler);
    if (sigHandler == SIG_ERR)
    {
        perror("Signal error");
        return 1;
    }
    a = 121;
    b = 5;
    result = a / b;
    printf("result = %d", result);
    return 0;
}
void div_by_zero_handler(int sig)
{
    if (sig == SIGFPE)
    {
        perror("div by zero hadle error\n");
        exit(0);
    }
    else
        printf("signal received %d\n", sig);
    return;
}