#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ANIMACAO.c"

sem_t wrt; // Semáforo do escritor
pthread_mutex_t mutex;

int numreader = 0; // Número de pessoas lendo
int reading[5] = {0,0,0,0,0}; // Quais pessoas estão lendo

void *writer(void *wno) // Thread do writer (Anjo)
{   
    sem_wait(&wrt);

    srand(time(NULL)); // Seed para rand()
    pthread_mutex_lock(&mutex);
    if ((*((int *)wno)) == 1) //Print do anjo correto
    {
        system("clear");
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\n                              Anjo esquerdo está escrevendo\n");
        frame_anjo_esq();
        printf("\n----------------------------------------------------------------------------------------------------------\n");
    }
    else{
        system("clear");
        printf("\n----------------------------------------------------------------------------------------------------------\n");
        printf("\n                              Anjo direito está escrevendo\n");
        frame_anjo_dir();
        printf("\n----------------------------------------------------------------------------------------------------------\n");
    }   
	
    sleep(rand() % 7 + 2); // Tempo aleatório de escrita entre 2 e 7 segudos
    sem_post(&wrt);
	pthread_mutex_unlock(&mutex);

}

void *reader(void *rno)
{   
    srand(time(NULL)); // Seed para rand()

    // Adquiri o lock para alterar o número de readers
    pthread_mutex_lock(&mutex);
    numreader++;
    reading[(*((int *)rno))-1]  = 1;
    if(numreader == 1) {
        sem_wait(&wrt); // Se for o primeiro a ler coloca o anjo em espera
    }
    pthread_mutex_unlock(&mutex);


    // Realiza a leitura

    pthread_mutex_lock(&mutex); //Lock para terminar o print sem interferencia de outra thread
    system("clear");
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    printf("\n                              Pessoa %d começou a ler \n",*((int *)rno));
    frame_readers(reading);
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    pthread_mutex_unlock(&mutex);
    
    sleep(rand() % 7 + 2);

    // Adquiri novamente o lock para alterar readers
    pthread_mutex_lock(&mutex);
    numreader--;
    reading[(*((int *)rno))-1]  = 0;
    if(numreader == 0) {
        sem_post(&wrt); // Se for o último a para de ler libera o anjo
    }
    pthread_mutex_unlock(&mutex);

    pthread_mutex_lock(&mutex); //Lock para terminar o print sem interferencia de outra thread
    system("clear");
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    printf("\n                              Pessoa %d terminou a leitura\n",*((int *)rno));
    frame_readers(reading);
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    pthread_mutex_unlock(&mutex);

    sleep(3);
}

int main()
{   

    pthread_t read[5],write[2]; // 5 leitores e 2 escritores
    pthread_mutex_init(&mutex, NULL);
    sem_init(&wrt,0,1);
    system("clear");
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    printf("\n                              Inicio do programa\n");
    frame_ninguem();
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    sleep(3);

    int id[5] = {1,2,3,4,5}; // Para idefentifcar leitores e escritores

    for (size_t j = 0; j < 2; j++)
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
    system("clear");
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    printf("\n                              Fim do programa\n");
    frame_ninguem();
    printf("\n----------------------------------------------------------------------------------------------------------\n");
    sleep(3);

    pthread_mutex_destroy(&mutex);
    sem_destroy(&wrt);

    return 0;
}   