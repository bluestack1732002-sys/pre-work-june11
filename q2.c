#include <stdio.h>
int main() {
    int a[3], sum = 0;
    printf("Enter three numbers: ");
    for (int i = 0; i<3; i++) {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("%d",sum);
    

    return 0;
}