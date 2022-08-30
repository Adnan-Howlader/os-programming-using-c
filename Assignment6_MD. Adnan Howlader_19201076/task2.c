#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int n=6;
    int m=4;
    int alloc[6][4]={{0,1,0,3},{2,0,0,3},{3,0,2,0},{2,1,1,5},{0,0,2,2},{1,2,3,1}};

    int max[6][4]={{6,4,3,4},{3,2,2,4},{9,1,2,6},{2,2,2,8},{4,3,3,7},{6,2,6,5}};

    int available[4]={2,2,2,1};
    
    int need[6][4];
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
    
    int finish[6]={0,0,0,0,0,0};
    int safe=0;
    int count=0;
    int loop_track=0;
    while(count<n){
        int j;
        for(j=0;j<n;j++){
            if(finish[j]==0){
                int k;
                for(k=0;k<m;k++){
                    if(need[j][k]>available[k]){
                        break;
                    }
                }
                if(k==m){
                    int l;
                    for(l=0;l<m;l++){
                        available[l]+=alloc[j][l];
                        
                    }
                    finish[j]=1;
                    count++;
                    printf("Process %d\n",j);
                }
            }
        }
        if(count<n-1){
            safe=0;
            
            
        }
        else{
            safe=1;
        }
        loop_track++;
        if(loop_track>n){
            break;
        }

        
        
    }
    if(safe==1){
        printf("Safe here\n");
    }
    else{
        printf("Deadlock ahead\n");
    }
   
    


return 0;
}