#include <stdio.h>
#include <unistd.h>
int main()
{
    int p[2], ret, pid, retnice;
    char writemessages[2][20] = {"Hi", "Hello"};
    char readmessages[20];
    ret = pipe(p);
    pid = fork();
    if (pid == 0)
    {
        retnice = nice(5);
        read(p[0], readmessages, sizeof(readmessages));
        printf("Child reading from pipe - Message1: %s\n", readmessages);
        read(p[0], readmessages, sizeof(readmessages));
        printf("Child reading from pipe - Message2: %s\n", readmessages);
    }
    else
    {
        retnice = nice(-4);
        printf("Parent write from pipe - Message1: %s\n", writemessages[0]);
        write(p[1], writemessages[0], sizeof(writemessages[0]));
        printf("Parent write from pipe - Message2: %s\n", writemessages[1]);
        write(p[1], writemessages[1], sizeof(writemessages[1]));
    }
    return 0;
}