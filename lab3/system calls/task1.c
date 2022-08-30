#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){

if(argc>=2){
char input[100];


FILE *f=fopen(argv[1],"w");

do{
input[0]='\0';

scanf("%s",input);
if(strcmp(input,"-1")!=0){


fprintf(f,"%s",input);


}



}while(strcmp(input,"-1") == 0);




}


return 0;
}
