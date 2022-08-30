#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>



void* test(void *input){

printf("thread %s running\n",(char *)input);
sleep(2);
printf("thread %s closed\n",(char *)input);
}

int main(int argc,char* argv[]){

   pthread_t t1,t2,t3,t4,t5;
   pthread_create(&t1,NULL,&test,"1");
   pthread_join(t1,NULL);
   pthread_create(&t2,NULL,&test,"2");
   pthread_join(t2,NULL);
   pthread_create(&t3,NULL,&test,"3");
   pthread_join(t3,NULL);
   pthread_create(&t4,NULL,&test,"4");
   pthread_join(t4,NULL);
   pthread_create(&t5,NULL,&test,"5");
   pthread_join(t5,NULL);
   
   
   return 0;
}
