// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,ld;
    // Write C code here
    printf("enter a number");
    
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int num=1;
        for(int j=1; j<=n; j++){
            printf("%d ",num);
           num++;
        }
        printf("\n");
        //printf("%d", num);
    }
    
    return 0;
}