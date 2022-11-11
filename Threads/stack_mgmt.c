#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

pthread_attr_t attr;

void *dowork(void *pthreadid)
{
    long tid;
    size_t stksize;

    tid = (long)pthreadid;
    pthread_attr_getstacksize(&attr, &stksize);
    printf("Thread %ld: stack size = %li bytes \n", tid, stksize);
    pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
    pthread_t thread;
    size_t stksize;
    pthread_t id;
    long t = 5;
    pthread_attr_init(&attr);
    pthread_attr_getstacksize(&attr, &stksize);
    printf("Default stack size = %li\n", stksize);
    stksize = 9000000;
    printf("Amount of stack needed per thread = %li\n", stksize);
    pthread_attr_setstacksize(&attr, stksize);
    id = pthread_create(&thread, &attr, dowork, (void *)t);
    if (id)
    {
        perror("Error in creating thread\n");
        exit(1);
    }
    pthread_exit(NULL);
}