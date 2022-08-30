#include <stdio.h>

void perfect_number(int high,int low){

    int i;
    int j;
    for (j=low;j<=high;j++){
        float SUM=0;
        for (i = 1; i < j; ++i) {
        if (j % i == 0) {
            SUM+=i;
        }
    }
     
 
      if ((SUM/j) == 1){
                      
                      printf("%d\n",j);
        } 
    }  


}
int main() {

    int high,low;
    
    
    
    scanf("%d",&low);
    scanf("%d",&high);
    perfect_number(high,low);

    return 0;
}
