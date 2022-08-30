#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

struct arg_struct{
  int arg1;
  int arg2;
  int arg3;
};

void *compare(void *arguments){

    struct arg_struct *args=(struct arg_struct *)arguments;
    int res1;
    int res2;
    int res3;
    
    res1=args->arg1;
    res2=args->arg2;
    res3=args->arg3;
    
    if(res1==res2 && res1==res3 && res2==res3){
       printf("Youreka\n");
   }
   
   else if (res1!=res2 && res1!=res3 && res2!=res3){
   
        printf("Hasta la vista\n");
   
   }
   
   else{
   
          printf("Miracle\n");
   }
   
    
}




void* test(void *input){


char string[5]={'\0'};
int value=0;
int* result=malloc(sizeof(int));
for(int i=0;i<sizeof((char*)input);i++){
 
    sprintf(string,"%d",((char*)input)[i]);
    
    value+=atoi(string);
    
    
    
    
}

*result=value;




return (void*)result;




}

int main(int argc,char* argv[]){

   int* res1;
   int* res2;
   int* res3;

   pthread_t t1,t2,t3,t4;
   char u1[10],u2[10],u3[10];
   printf("enter username 1: ");
   scanf("%s",u1);
   printf("enter username 2: ");
   scanf("%s",u2);
   printf("enter username 3: ");
   scanf("%s",u3);
   pthread_create(&t1,NULL,test,u1);
   
   pthread_create(&t2,NULL,test,u2);
   
   pthread_create(&t3,NULL,test,u3);
   pthread_join(t1,(void**)&res1);
   
   pthread_join(t2,(void**)&res2);
   
   pthread_join(t3,(void**)&res3);
   
   struct arg_struct args;
   args.arg1=*res1;
   args.arg2=*res2;
   args.arg3=*res3;
   pthread_create(&t4,NULL,compare,(void *)&args);
   pthread_join(t4,NULL);
   
   
  
   
   return 0;
}
