#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define PORT_NO 12346

int socket_send(int hSocket, char *rqst, short lenrqst)
{
    int shortRetval = -1;
    // struct timeval tv;
    // tv.tv_Sec = 20;
    shortRetval = send(hSocket, rqst, lenrqst, 0);
    return shortRetval;
}

int socket_receive(int hSocket, char *rsp, short size)
{
    int shortRetval = -1;
    shortRetval = recv(hSocket, rsp, size, 0);
    printf("Response = %s\n", rsp);
    return shortRetval;
}

int main()
{
    short hSocket;
    int iRetVal = -1;
    int read_size = 0;
    struct sockaddr_in server;
    char sendToServer[100] = {0};
    char serverRep[200] = {0};
    printf("Create the socket\n");
    hSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (hSocket == -1)
    {
        printf("Could not create socket\n");
        return 1;
    }
    struct sockaddr_in remote = {0};
    remote.sin_addr.s_addr = inet_addr("127.0.0.1");
    remote.sin_family = AF_INET;
    remote.sin_port = htons(PORT_NO);
    iRetVal = connect(hSocket, (struct sockaddr *)&remote, sizeof(remote));
    if (iRetVal < 0)
    {
        printf("Error in connect \n");
        return 1;
    }
    printf("connected to server\n");
    printf("Enter the message: ");
    fgets(sendToServer, 100, stdin);
    socket_send(hSocket, sendToServer, strlen(sendToServer));
    read_size = socket_receive(hSocket, serverRep, 200);
    printf("Server response: %s\n\n", serverRep);
    close(hSocket);
    return 0;
}