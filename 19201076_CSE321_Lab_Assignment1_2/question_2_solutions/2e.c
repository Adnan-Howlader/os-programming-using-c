#include <stdio.h>




int main(){

char a[100];
char *forward,*backward;

printf("Enter your string \n");

scanf("%s",a);

forward=a;
while (*forward !='\0'){

++forward;

}

--forward;
backward=a;

for (; backward<=forward;){
if(*backward==*forward){
backward++;
--forward;

}
else{
break;
}


}

if(backward>forward){
printf("Palindrome string");

}

else{
printf("not palindrome");
}

return 0;


}
