#include <stdio.h>

int main(){

char stringg[1000];
char result[1000];


FILE *fptr;

fptr = fopen("2b_text_input", "r");

fscanf(fptr,"%[^\n]",stringg);





int count=0;
int j=0;
for(int i=0;i<=sizeof(stringg);i++){
if (stringg[i] ==' ' && stringg[i+1] == ' '){
continue;

}
else {
result[j]=stringg[i];
j+=1;

}
   
}


FILE *fwrite;

fwrite = fopen("2b_text_output", "w");

fprintf(fwrite, "%s", result);
fclose(fwrite);



return 0;

}
