#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>



int main(int argc,int argv[]){


int a=fork();

if(a!=0){
printf("parent process ID:%d\n",getpid());

}

if (a==0){
    printf("child process ID:%d\n",getpid());
    int b=fork();
    if(a==0 && b==0){
        printf("grandchild process ID:%d\n",getpid());
    
    }
    else{
       int c=fork();
       if (a==0 && c==0 && b!=0){
          printf("grandchild process ID:%d\n",getpid());
       
       
       }
       else{
       
           int d=fork();
           
           if(d==0){
           
           printf("grandchild process ID:%d\n",getpid());
           
           }
       }
    }
    
}


return 0;
}
