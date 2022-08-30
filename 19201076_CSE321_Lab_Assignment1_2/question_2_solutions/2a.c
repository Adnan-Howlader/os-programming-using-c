#include <stdio.h>

int addition(int a, int b){
   int result = a + b ;
   
   return result;

}

int multiplication (int a , int  b) {
 
 int result = a * b;
 
 return result;

}

int substraction ( int a , int b ) {

 int result = a - b;
 
 return result;

}

int main() {

int a,b;


printf("enter a ,b using space \n");

scanf("%d %d",&a,&b);

if (a>b){

int result=substraction(a,b);
printf("result: %d", result);
}

else if (a<b){

int result = addition(a,b);
printf("result: %d", result);
}
else {

int result = multiplication(a,b);
printf("result: %d", result);

}


return 0;


}
