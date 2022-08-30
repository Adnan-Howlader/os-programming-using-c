#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){

char password[50];
int lower=0;
int upper=0;
int digit=0;
int special=0;
int no_error=1;
printf("enter your password:\n");

scanf("%s",password);

for (int i =0; i<=strlen(password);i++){

if (password[i]>=97 && password[i]<=122){
lower=1;


}

else if (password[i]>=65 && password[i]<=90){
upper=1;


}
else if (password[i]>=48 && password[i]<=57){

digit=1;

}
else if (password[i]=='@' || password[i]=='$' || password[i]=='#' || password[i]=='_' ){
special=1;
}

}



if (lower==0){
printf("Lowercase Missing, ");
no_error=false;
}
if (upper==0){
printf("Uppercase Missing, ");
no_error=false;

}


if (digit==0){
printf("digit Missing, ");
no_error=false;

}

if (special==0){
printf("Special character Missing");
no_error=false;

}

if (no_error){
printf("everything is ok");

}



return 0;



}
