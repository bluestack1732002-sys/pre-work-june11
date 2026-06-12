#include <stdio.h>
int main() {
    int n,i,j,k;
    printf("Tell me how many value you want to store: ");
    scanf("%d",&n);
    int a[n],b[n];
    for (i=0; i<n; i++) {
        printf("Enter the value and press enter key: ");
        scanf("%d",&a[i]);
    }

    for (j = 0; j<n; j++) {
      
        b[j] = a[j];
         
    }
    for(k=0; k<n; k++) {
        printf("%d\n",b[i]);
    }
    return 0;
}