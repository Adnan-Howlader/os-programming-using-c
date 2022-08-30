#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc,char* argv[]){

int n;

n=argc-1;

if(n==0){
   return 0;
}
int array[n];
for (int i=0;i<n;i++){
  array[i]=atoi(argv[i+1]);
  

}



for (int i=0;i<n;i++){
  if (array[i]%2==0){
      printf("%d is even\n",array[i]);
  }
  
  else{
  
       printf("%d is odd\n",array[i]);
        
  }
  

}









return 0;


}
