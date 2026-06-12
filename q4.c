#include <stdio.h>
int main() {
    int num[6] = {1,2,3,1,2,3},dupli_elements= 0;
    for (int i =0;i<6;i++){
        for (int j=i+1; j<6;j++){
            if (num[i]==num[j]){
                dupli_elements++;
            }
        }
    }
    printf("duplicates: %d",dupli_elements);
    return 0;
}