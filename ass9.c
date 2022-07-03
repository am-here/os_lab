#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
void inthandler(int sig_no);
void quithandler(int sig_no);
void huphandler(int sig_no);
main()
{
    int pid;
    if ((pid = fork()) < 0)
    {
        perror("Child process could not be created");
        exit(1);
    }
    if (pid == 0)
    {
        signal(SIGINT, inthandler);
        signal(SIGQUIT, quithandler);
        signal(SIGHUP, huphandler);
        for (;;)
            ;
    }
    else
    {
        printf("pid is = %d\n", pid);
        printf("Sending SIGINT Signal\n");
        kill(pid, SIGINT);
        sleep(5);
        printf("Sending SIGQUIT Signal\n");
        kill(pid, SIGQUIT);
        sleep(5);
        printf("Sending SIGHUP Signal\n");
        kill(pid, SIGHUP);
        sleep(5);
        printf("Sending SIGSTOP Signal\n");
        kill(pid, SIGSTOP);
        sleep(5);
    }
}
void inthandler(int sig_no)
{
    signal(SIGINT, inthandler);
    printf("\nInterrupt signal handled by child process");
}
void quithandler(int sig_no)
{
    signal(SIGQUIT, quithandler);
    printf("\nQuit signal handled by child process");
}
void huphandler(int sig_no)
{
    signal(SIGHUP, huphandler);
    printf("\n Hang up signal handled by child process");
}