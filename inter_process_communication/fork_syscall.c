#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#define MAX 10

void child_process();
void parent_process();
int main(void)
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
        child_process();
    else if (pid > 0)
        parent_process();
    else
    {
        printf("fork error\n");
        return 1;
    }
    return 0;
}
void parent_process()
{
    int i = 0;
    for (i = 0; i < MAX; i++)
    {
        printf("parent process print %d \n", i);
    }
}
void child_process()
{
    int i = 0;
    for (i = 0; i < MAX; i++)
    {
        printf("child process print %d \n", i);
    }
}