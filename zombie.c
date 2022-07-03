#include <stdio.h>
main()
{
    if (fork() > 0)
    {
        printf("\nProcess ID = %u", getpid());
        printf("\nParent");
        sleep(10);
    }
}