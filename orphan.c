#include <stdio.h>
main()
{
    int pid;
    if ((pid = fork()) == 0)
    {
        printf("I'm child process and my PID is %d\n", getpid());
        printf("I'm child process and my parent's PID is %d\n", getppid());
        sleep(10);
        printf("I'm child process and my PID is %d\n", getpid());
        printf("I'm orphan child process and my parent's PID is %d\n", getppid());
    }
    else if (pid > 0)
    {
        printf("I'm parent process and my PID is %d\n", getpid());
        printf("I'm parent process and my parent's PID is %d\n", getppid());
    }
    else
    {
        printf("Unsuccesful execution of fork\n");
    }
}