#include <pthread.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>

void *HelloTask(void *param);

pthread_t HelloTaskObj;

int main(void)
{
    pthread_create(&HelloTaskObj,NULL, HelloTask,NULL);

    pthread_join(HelloTaskObj,NULL);

    return 0;
}