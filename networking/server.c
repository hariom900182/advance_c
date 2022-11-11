#include <stdio.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>
#define PORT_NO 12346

int main()
{
    short sock_desc = 0;
    short sock;
    int iretval = -1, clientLen = 0;
    struct sockaddr_in client;
    char client_message[200] = {0};
    char message[100] = {0};
    const char *pmsg = "hello\n";
    printf("Creating the socket...\n");
    sock_desc = socket(AF_INET, SOCK_STREAM, 0); // create
    if (sock_desc == -1)
    {
        printf("Could not create socket! \n");
        return 1;
    }
    printf("Socket created\n");
    struct sockaddr_in remote = {0};
    remote.sin_family = AF_INET;
    remote.sin_addr.s_addr = htonl(INADDR_ANY);
    remote.sin_port = htons(PORT_NO);
    iretval = bind(sock_desc, (struct sockaddr *)&remote, sizeof(remote));
    if (iretval < 0)
    {
        printf("Binding failed\n");
        return 1;
    }
    printf("Binding done\n");
    listen(sock_desc, 3);
    while (1)
    {
        printf("Waiting for incomming connections...\n");
        clientLen = sizeof(struct sockaddr_in);
        sock = accept(sock_desc, (struct sockaddr *)&client, (socklen_t *)&clientLen);
        if (sock < 0)
        {
            printf("Accept failed \n");
            return 1;
        }
        printf("Connection accepted\n");
        memset(client_message, '\0', sizeof client_message);
        memset(message, '\0', sizeof message);
        if (recv(sock, client_message, 200, 0) < 0)
        {
            printf("Receive fail\n");
            break;
        }
        printf("Client reply: %s\n", client_message);
        int va = strcmp(pmsg, client_message);
        printf("strinval %d\n", va);
        if (strcmp(pmsg, client_message) == 0)
        {
            strcpy(message, "Hi there!");
        }
        else
        {
            strcpy(message, "Invalid message !");
        }
        if (send(sock, message, strlen(message), 0) < 0)
        {
            printf("Send failed\n");
            return 1;
        }
        close(sock);
        sleep(1);
    }
    return 0;
}