#include <stdio.h>
#include <sys/types.h>

#include <unistd.h>






int main(){

int id=fork();

if (id<0){
   printf("process creation failed\n");
}
else if (id==0){

   
   int id =fork();
if (id<0){
    printf("process creation failed\n");
}
else if(id==0){
    printf("I am grandchild process \n");

}
else{
   sleep(2);
   printf("I am child process \n");



}


}
else{

    sleep(5);

printf("I am parent process\n");
}




return 0;
}
