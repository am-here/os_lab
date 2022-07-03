#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NTHREADS 10
void *thread_fn(void *);
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
int counter = 0;
main()
{
    pthread_t thread_id[NTHREADS];
    int i, j;
    for (i = 0; i < NTHREADS; i++)
        pthread_create(&thread_id[i], NULL, thread_fn, NULL);
    for (i = 0; i < NTHREADS; i++)
        pthread_join(thread_id[i], NULL);
    printf("The value of counter = %d\n", counter);
}
void *thread_fn(void *ptr)
{
    printf("Thread number = %d\n", pthread_self());
    pthread_mutex_lock(&mutex1);
    counter++;
    pthread_mutex_unlock(&mutex1);
}