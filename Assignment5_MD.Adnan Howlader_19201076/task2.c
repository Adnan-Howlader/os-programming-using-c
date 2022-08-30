#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#define MaxCrops 5

#define warehouse_size 5
sem_t empty, full;
int in=0;
int out=0;
char crops[warehouse_size]={'R','W','P','S','M'};
char warehouse[warehouse_size]={'N','N','N','N','N'};
pthread_mutex_t mutex;

void *Farmer(void *arg){
    int i;
    for(i=0;i<MaxCrops;i++){
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        warehouse[in]=crops[i];
        printf("Farmer  %d insert crops %c at %d\n",*(int *)arg,warehouse[in],in);
        
        in=(in+1)%warehouse_size;
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
    }
    pthread_exit(NULL);


}

void *ShopOwner(void *arg){
    int i;
    for(i=0;i<MaxCrops;i++){
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        printf("Shop Owner %d removes crop %c from %d\n",*(int *)arg,warehouse[out],out);
        out=(out+1)%warehouse_size;
        pthread_mutex_unlock(&mutex);
        sem_post(&empty);
    }
    pthread_exit(NULL);
        
}


int main(){
    pthread_t Far[5],Sho[5];
    pthread_mutex_init(&mutex,NULL);
    sem_init(&empty,0,warehouse_size);
    sem_init(&full,0,0);
    int a[5]={1,2,3,4,5};
    
    for(int i=0;i<5;i++){
        pthread_create(&Far[i],NULL,Farmer,&a[i]);
        pthread_create(&Sho[i],NULL,ShopOwner,&a[i]);
    }
    
    for(int i=0;i<5;i++){
        pthread_join(Far[i],NULL);
        pthread_join(Sho[i],NULL);
    }
    
    pthread_mutex_destroy(&mutex);
    
    sem_destroy(&empty);
    sem_destroy(&full);
    return 0;



    
    
}
