#include <stdio.h>
#include <unistd.h>
int main()
{
    int p[2];
    pipe(p);
    printf("The read end file descriptor is %d and the write end file descriptor is %d", p[0], p[1]);
    return 0;
}