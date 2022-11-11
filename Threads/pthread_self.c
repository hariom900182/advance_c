#include <stdio.h>
#include <pthread.h>
// funs
// pthread_self- thread Id
void *hello_fun()
{
    printf("Thread id using self: %ld  \n", pthread_self());
    return NULL;
}

int main(int argc, char *argv[])
{
    pthread_t thread = 0;
    pthread_create(&thread, NULL, hello_fun, NULL);
    pthread_join(thread, NULL);
    printf("Thread ID: %ld", thread);
    pthread_exit(NULL);
    return 0;
}