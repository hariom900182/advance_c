#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void first_process();
void second_process();
void third_process();
int main()
{
    printf("\nMain process parent pid = %d,pid = %d\n", getppid(), getpid());
    sleep(1);
    fork();
    first_process();
    second_process();
    third_process();
    return 0;
}
void first_process()
{
    printf("\nFirst process parent pid = %d,pid = %d\n", getppid(), getpid());
}
void second_process()
{
    printf("\nSeocnd process parent pid = %d,pid = %d\n", getppid(), getpid());
}

void third_process()
{
    printf("\nThird process parent pid = %d,pid = %d\n", getppid(), getpid());
}