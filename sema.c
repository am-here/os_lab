#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
int main()
{
    int semid, key, semget;
    key = (key_t)0x30;
    semid = semget(key, 1, IPC_CREAT | 0666);
    printf("Created semaphore with id =  %d\n", semid);
    printf("key = %d\n", key);
    return 0;
}