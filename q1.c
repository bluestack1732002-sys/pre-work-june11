#include <stdio.h>
int main() {
    int n;
    printf("Tell me how many value you want to store: ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        printf("Enter the value oand press enter key after each value: ");
        scanf("%d",&a[i]);
    }
    for (int i = n-1; i >=0; i--)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    

    return 0;
}