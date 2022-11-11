#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
void *hello_fun()
{
    sleep(2);
    printf("Hello world!\n");

    return NULL;
}

int main(int argc, char *argv[])
{
    pthread_t thread = 0;
    int p = pthread_create(&thread, NULL, hello_fun, NULL);
    printf("canceling thread...");
    pthread_cancel(thread);
    pthread_join(thread, NULL);

    pthread_exit(NULL);
    return 0;
}