#include<stdio.h>
int main(){
    int n,ld;
    printf("enter that you want to reverse ");
    scanf("%d",&n);
    int r=0;
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    
    printf("%d",r);
    return 0;
}