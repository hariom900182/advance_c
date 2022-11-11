#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
// funs
// pthread_self- thread Id
void *hello_fun()
{
    pthread_detach(pthread_self());
    sleep(1);
    printf("Hello from thread\n");
    pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
    pthread_t thread = 0;
    int ret = pthread_create(&thread, NULL, hello_fun, NULL);
    if (ret != 0)
    {
        perror("Thread creation error\n");
        exit(1);
    }
    printf("After thread creation in mian\n");
    // pthread_join(thread, NULL);
    //   printf("Thread ID: %ld", thread);
    pthread_exit(NULL);
    return 0;
}