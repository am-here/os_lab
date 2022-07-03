#include <stdio.h>
#include <unistd.h>
int main()
{
    int p1[2], p2[2], ret1, ret2, pid;
    char pipe1writemessages[20] = "Hi";
    char pipe2writemessages[20] = "Hello";
    char readmessages[20];
    ret1 = pipe(p1);
    if (ret1 == -1)
        printf("Pipe creation failed\n");
    ret2 = pipe(p2);
    if (ret2 == -1)
        printf("Pipe creation failed\n");
    pid = fork();
    if (pid != 0)
    {
        close(p1[0]);
        close(p2[1]);
        printf("In parent process: write to pipe1_msg: %s\n", pipe1writemessages);
        write(p1[1], pipe1writemessages, sizeof(pipe1writemessages));
        read(p2[0], readmessages, sizeof(readmessages));
        printf("In parent process: read from pipe2_msg: %s\n", readmessages);
    }
    else
    {
        close(p1[1]);
        close(p2[0]);
        read(p2[0], readmessages, sizeof(readmessages));
        printf("In child process: read from pipe1_msg: %s\n", readmessages);
        printf("In child process: writing to pipe2_msg: %s\n", pipe2writemessages);
        write(p2[1], pipe2writemessages, sizeof(pipe2writemessages));
    }
    return 0;
}