#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows :");
     
scanf("%d",&n);
int a=n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=a;j++){
        printf("*");
        }
        for(int k=1; k<=n; k++){
            printf("#");
        }
         printf("\n");
           a--;
    } 
}