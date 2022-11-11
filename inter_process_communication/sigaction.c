#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>
#include <errno.h>

int score = 0;

void end_game()
{
    printf("\nFinal score: %d\n", score);
    exit(0);
}
int catch_signal(int sig, void (*handler)(int))
{
    struct sigaction action;
    action.sa_handler = handler;
    sigemptyset(&action.sa_mask);
    action.sa_flags = 0;
    return sigaction(sig, &action, NULL);
}
void error(char *msg)
{
    fprintf(stderr, "%s: %d\n", msg, errno);
    exit(1);
}

void times_up()
{
    puts("\nTime's UP!");
    raise(SIGINT);
}

int main()
{
    srand(time(0));
    catch_signal(SIGALRM, times_up);
    catch_signal(SIGINT, end_game);
    while (1)
    {
        int a = rand() % 11;
        int b = rand() % 11;
        char txt[4];
        alarm(5);
        printf("\nWhat is %d times %d: ", a, b);
        fgets(txt, 4, stdin);
        int answer = atoi(txt);
        if (answer == a * b)
        {
            score++;
        }
    }
}
