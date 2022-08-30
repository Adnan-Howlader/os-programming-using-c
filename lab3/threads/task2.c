#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>



void* test(void *input){

if((char *)input=="0"){
   int n=1;

   for(int i=0;i<5;i++){

    printf("thread %s prints \%d \n",(char *)input,n);
    n++;

    }

}




if((char *)input=="1"){
   sleep(1);
   int n=6;

   for(int i=0;i<5;i++){

    printf("thread %s prints \%d \n",(char *)input,n);
    n++;

    }

}

if((char *)input=="2"){
   sleep(1);
   int n=11;

   for(int i=0;i<5;i++){

    printf("thread %s prints \%d \n",(char *)input,n);
    n++;

    }

}


if((char *)input=="3"){
   sleep(1);
   int n=16;

   for(int i=0;i<5;i++){

    printf("thread %s prints \%d \n",(char *)input,n);
    n++;

    }

}

if((char *)input=="4"){
   sleep(1);
   int n=21;

   for(int i=0;i<5;i++){

    printf("thread %s prints \%d \n",(char *)input,n);
    n++;

    }

}


if((char *)input=="5"){
   sleep(1);
   int n=26;

   for(int i=0;i<5;i++){

    printf("thread %s prints \%d \n",(char *)input,n);
    n++;

    }

}


}

int main(int argc,char* argv[]){

   pthread_t t0,t1,t2,t3,t4,t5;
   pthread_create(&t0,NULL,&test,"0");
   pthread_join(t0,NULL);
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
