#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <math.h>


int main(){
   FILE *fptr;
   
   fptr = fopen("task3.txt","w");
   
   
   int count=0;
   int a=fork();
   count+=1;
   
   
   int b=fork();
   count+=1;
   
   
   int c=fork();
   count+=1;
   
   int p_num= pow(2,count);
   
   
   fprintf(fptr,"%d",p_num);
   fclose(fptr);
   
   
   
   if (a==0 && b!=0 && c!=0){
        
        sleep(1);
        if(( getpid() % 2 )!=0){
               
                fork();
                fptr = fopen("task3.txt","r");
                fscanf(fptr,"%d",&p_num);
                
                fclose(fptr);
                
                p_num++;
                
               
                fptr = fopen("task3.txt","w");
                
                fprintf(fptr,"%d",p_num);
                fclose(fptr);
                
        }
   
   
   }
   
   
   else if (a!=0 && b==0 && c!=0){
        
        
        sleep(2);
        
        if((getpid()%2)!=0){
                
                fork();
                fptr = fopen("task3.txt","r");
                fscanf(fptr,"%d",&p_num);
                fclose(fptr);
                p_num++;
                fptr = fopen("task3.txt","w");
                fprintf(fptr,"%d",p_num);
                fclose(fptr);
        }
   
   
   }
   
     
   
      else if (a!=0 && b!=0 && c==0){
     
        sleep(3);
        if((getpid()%2)!=0){
                fork();
                fptr = fopen("task3.txt","r");
                fscanf(fptr,"%d",&p_num);
                fclose(fptr);
                p_num++;
                fptr = fopen("task3.txt","w");
                fprintf(fptr,"%d",p_num);
                fclose(fptr);
        }
   
   
   }
   
   
    else if (a==0 && b==0 && c!=0){
      
        sleep(4);
        if((getpid()%2)!=0){
                fork();
                fptr = fopen("task3.txt","r");
                fscanf(fptr,"%d",&p_num);
                fclose(fptr);
                p_num++;
                fptr = fopen("task3.txt","w");
                fprintf(fptr,"%d",p_num);
                fclose(fptr);
        }
   
   
   }  
   
   
    else if (a==0 && b!=0 && c==0){
        
        sleep(5);
        if((getpid()%2)!=0){
                fork();
                fptr = fopen("task3.txt","r");
                fscanf(fptr,"%d",&p_num);
                fclose(fptr);
                p_num++;
                fptr = fopen("task3.txt","w");
                fprintf(fptr,"%d",p_num);
                fclose(fptr);
        }
   
   
   }     
   
     
    else if (a!=0 && b==0 && c==0){
         sleep(6);
        
        if((getpid()%2)!=0){
                fork();
                fptr = fopen("task3.txt","r");
                fscanf(fptr,"%d",&p_num);
                fclose(fptr);
                p_num++;
                fptr = fopen("task3.txt","w");
                fprintf(fptr,"%d",p_num);
                fclose(fptr);
        }
   
   
   }
   
      else if (a==0 && b==0 && c==0){
        
       sleep(7);
        if((getpid()%2)!=0){
                fork();
                fptr = fopen("task3.txt","r");
                fscanf(fptr,"%d",&p_num);
                fclose(fptr);
                p_num++;
                fptr = fopen("task3.txt","w");
                fprintf(fptr,"%d",p_num);
                fclose(fptr);
        }
   
   
   }
   sleep(10);
   if(a!=0 && b!=0 && c!=0){
      
      fptr = fopen("task3.txt","r");
      fscanf(fptr,"%d",&p_num);
      
      
   
      printf(" total process count %d\n",p_num);
      fclose(fptr);
   
   }
  
      
   
   
   
   
   
   
   

//need -lm to compile
 return 0;  
}
