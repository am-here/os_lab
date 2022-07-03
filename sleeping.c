#include <stdio.h>
main()
{
    if (fork() > 0)
    {
        printf("\nProcess ID = %u", getpid());
        sleep(10);
        system("ps -el");
    }
}