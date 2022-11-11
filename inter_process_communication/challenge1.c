#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
int score = 0;
void sigalarm_handler(int signum)
{
    printf("\nYour score is: %d", score);
    printf("\nTime UP!\n");
    exit(EXIT_SUCCESS);
}

void sigint_handler(int signum)
{
    printf("intruppted");
    exit(EXIT_SUCCESS);
}

int main()
{
    int answer;
    alarm(10);
    srand(2);
    signal(SIGALRM, sigalarm_handler);
    signal(SIGINT, sigint_handler);
    while (1)
    {
        int a = 1 + rand() % 10;
        int b = 1 + rand() % 10;
        printf("\nMultiplication of %d and %d = ", a, b);
        scanf("%d", &answer);
        if (answer == a * b)
            score++;
        else
            printf("\nWrong answer");
    }

    return 0;
}