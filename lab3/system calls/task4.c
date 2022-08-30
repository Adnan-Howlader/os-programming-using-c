#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc,char* argv[]){

//the program needs command line arguments of some numbers

int a=fork();

if (a<0){
printf("fork failed successfully");

}
if(a==0){
//child process doing this

 

 execv("./sort", argv);
 printf("\n");
 


}



else{

//parent process doing this

execv("./oddeven",argv);
}




return 0;
}
