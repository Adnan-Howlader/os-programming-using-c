#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define MAX 10
#define BUFLEN 6
#define NUM_THREADS 2


pthread_mutex_t mutex;

void* consumer(void* arg);
void* producer(void* arg);

char buffer[BUFLEN]={'0','0','0','0','0','0'};
char source[BUFLEN];
int pCount=0;
int cCount=0;
int buffen=5;
int i=0;
int j=0;
int tracker_p=0;
int tracker_c=0;


pthread_cond_t nonempty=PTHREAD_COND_INITIALIZER;
pthread_cond_t full=PTHREAD_COND_INITIALIZER;

int thread_id[NUM_THREADS]={0,1};


int main(){
    pthread_mutex_init(&mutex,NULL);
    pthread_t thread[NUM_THREADS];

    strcpy(source,"abcde");
    buffen=strlen(source);
    int* a;
    a=malloc(sizeof(int));
    *a=0;
    int* b;
    b=malloc(sizeof(int));
    *b=1;
   
    pthread_create(&thread[0],NULL,producer,a);
    pthread_create(&thread[1],NULL,consumer,b);
    
    pthread_join(thread[0],NULL);
    pthread_join(thread[1],NULL);

    printf("%s\n",source);



    return 0;

}


void *producer(void *arg){
      
    
      while(1){
        pthread_mutex_lock(&mutex);
        
        if(buffer[pCount]!='0'){
               pthread_mutex_unlock(&mutex);
               
                sleep(1);
                continue;
                
            }  

        
            
            

            
            buffer[pCount]=source[j];
            printf("%d produced %c by thread %d\n",tracker_p,buffer[pCount],*(int *)arg);
            pCount++;
            j++;
            tracker_p++;
        
            if(j==buffen){
                j=0;
                pCount=0;
            }
            
            
            pthread_mutex_unlock(&mutex);
            sleep(1);
            
        }



}
      
    

void *consumer(void *arg){
    
  sleep(1);
    while(1){
        
        
        pthread_mutex_lock(&mutex);
        if(buffer[cCount]=='0'){
                
                
                pthread_mutex_unlock(&mutex);
                
                sleep(1);
                continue;
            }
       
            
           
            printf("%d consumed %c by thread %d\n",tracker_c,buffer[i],*(int *)arg);
            buffer[i]='0';
            cCount++;
            i++;
            tracker_c++;
            if(i==buffen){
                i=0;
                cCount=0;
            }
            
            
            
            pthread_mutex_unlock(&mutex);
            sleep(1);
            
            
        
    }
}
