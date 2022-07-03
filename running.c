#include <stdio.h>
main()
{
    printf("\nProcess ID = %u", getpid());
    for (;;)
        ;
    system("ps -el");
}