#include <stdio.h>
#include <pthread.h>
#include <malloc.h>
#include <string.h>
// argument structure
struct thread_data
{
    int thread_id;
    int sum;
    char *message;
};

// single argument
void *print_message(void *ptr)
{
    char *msg;
    msg = (char *)ptr;
    printf("\nmessage = %s\n", msg);
}

// single argument
void *print_message_multiarg(void *args)
{
    struct thread_data *data;
    int taskid = 0, sum = 0;
    char message[255];
    data = (struct thread_data *)args;
    taskid = data->thread_id;
    sum = data->sum;
    strcpy(message, data->message);
    printf("taskid= %d, sum= %d, message= %s\n", taskid, sum, message);

    // return value
    char *ack = strdup("thread success");
    return (void *)ack;
}

int main(int argc, char *argv[])
{
    // char *msg1 = "Hello world";
    char *ret_value;
    pthread_t thread;
    struct thread_data dt;
    dt.message = malloc(sizeof(char) * 255);
    dt.thread_id = 35;
    dt.message = "I am from main thread";
    pthread_t my_id = pthread_create(&thread, NULL, print_message_multiarg, (void *)&dt);
    // pthread_create(&thread, NULL, print_message, msg1);
    pthread_join(thread, (void **)&ret_value); // get returned value from thread
    printf("\n Returned vlaue from thread:  %s\n", ret_value);
    // pthread_exit(NULL);
}