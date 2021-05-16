#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <unistd.h>
#include "ANIMACAO.h"

sem_t wrt;
pthread_mutex_t mutex;

int numreader = 0;
int reading[5] = {0,0,0,0,0};

void *writer(void *wno)
{   
    sem_wait(&wrt);

    if ((*((int *)wno)) == 1)
    {
        frame_anjo_esq();
    }
    else{
        frame__anjo_dir();
    }
    
    printf("Writer %d \n",(*((int *)wno)));
    sleep(3);
    sem_post(&wrt);

}
void *reader(void *rno)
{   
    // Reader acquire the lock before modifying numreader
    pthread_mutex_lock(&mutex);
    numreader++;
    reading[(*((int *)rno))-1]  = 1;
    if(numreader == 1) {
        sem_wait(&wrt); // If this id the first reader, then it will block the writer
    }
    pthread_mutex_unlock(&mutex);


    // Reading Section
    pthread_mutex_lock(&mutex);
    frame_readers(reading);
    printf("Reader %d enters\n",*((int *)rno));
    pthread_mutex_unlock(&mutex);
    
    sleep((*((int *)rno))*2);

    // Reader acquire the lock before modifying numreader
    pthread_mutex_lock(&mutex);
    numreader--;
    reading[(*((int *)rno))-1]  = 0;
    if(numreader == 0) {
        sem_post(&wrt); // If this is the last reader, it will wake up the writer.
    }
    pthread_mutex_unlock(&mutex);

    pthread_mutex_lock(&mutex);
    frame_readers(reading);
    printf("Reader %d leaves\n",*((int *)rno));
    pthread_mutex_unlock(&mutex);

    sleep(3);
}

int main()
{   

    pthread_t read[5],write[2];
    pthread_mutex_init(&mutex, NULL);
    sem_init(&wrt,0,1);

    int id[5] = {1,2,3,4,5}; //Just used for numbering the producer and consumer

    for (size_t j = 0; j < 5; j++)
    {
        pthread_create(&read[2], NULL, (void *)reader, (void *)&id[2]);
        pthread_create(&write[1], NULL, (void *)writer, (void *)&id[1]);
        pthread_create(&read[0], NULL, (void *)reader, (void *)&id[0]);
        pthread_create(&read[3], NULL, (void *)reader, (void *)&id[3]);
        pthread_create(&read[4], NULL, (void *)reader, (void *)&id[4]);
        pthread_create(&write[0], NULL, (void *)writer, (void *)&id[0]);
        pthread_create(&read[1], NULL, (void *)reader, (void *)&id[1]);

        for(int i = 0; i < 5; i++) {
            pthread_join(read[i], NULL);
        }
        for(int i = 0; i < 2; i++) {
            pthread_join(write[i], NULL);
        }
    }

    pthread_mutex_destroy(&mutex);
    sem_destroy(&wrt);

    return 0;
}   