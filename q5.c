#include <stdio.h>
int main() {
    int num[5] = {1,2,15,3,7},max,min;
    max = num[0];
        
        for(int j=1; j<5;j++){
            if (max > num[j]){
                printf("still comparing...");
            }
            else{
                max = num[j];
            }
        }

       
    
    min = num[0];
        
        for(int j=1; j<5;j++){
            if (min < num[j]){
                printf("comparing..");
                
            }
            else{
                min = num[j];
            }
        }

       
    
    printf("\n");
    printf("maximum: %d\n",max);
    printf("minimum: %d",min);
    return 0;
}