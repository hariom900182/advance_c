#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>

void signal_handler(int signum);

int main(void)
{
    int i, x;
    signal(SIGINT, signal_handler);
    srand(clock());
    for (i = 0; i < 100; i++)
    {
        x = 1 + rand() % 50;
        if (x == 25)
            raise(SIGINT);
        printf("%4d", i);
        if (i % 10 == 0)
            printf("\n");
    }
    return 0;
}
void signal_handler(int signum)
{
    int response;
    printf("\ninterupt signal \n");
    scanf("%d", &response);
    while (response != 1 && response != 2)
    {
        printf("(1 =yes, 2=no)? ");
        scanf("%d", &response);
    }
    if (response == 1)
        signal(SIGINT, signal_handler);
    else
        exit(EXIT_SUCCESS);
}