#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare (const void * a1, const void * a2) {

   return ( *(int*)a2 - *(int*)a1 );
}

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

qsort(array, n, sizeof(int), compare);

for (int i=0;i<n;i++){
  printf("%d\n",array[i]);
  

}









return 0;


}
