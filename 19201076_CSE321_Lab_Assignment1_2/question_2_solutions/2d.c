#include <stdio.h>
#include <regex.h>


int main() {
regex_t reegex;
char email[30];

int value1,value2;


value1=regcomp(&reegex,"^.*@sheba.xyz$",0);
printf("enter your email\n");

scanf("%s",email);



value2=regexec(&reegex,email,0,NULL,0);

if (value2==0){

printf("email address is okay\n");

}

else if (value2 == REG_NOMATCH){
printf("email address is outdated\n");
}

else{

printf("error occured");

}







return 0;


}
