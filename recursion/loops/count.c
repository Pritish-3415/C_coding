#include<stdio.h>
int main(){
    int n;
    printf("enter that you want to count ");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n = n/10;
        count++;
    }
    printf("%d",count);
    return 0;
}