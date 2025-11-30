#include<stdio.h>
int main(){
    int n,ld,nld;
    printf("enter that you want to reverse ");
    scanf("%d",&n);
    int num =n;
    int r=0;
    int sum=0;
    while(n!=0){
        r=r*10;
        ld=n%10;
        r=r+(ld);
        n=n/10;
    }
    sum=sum+num+r;
    
    printf("%d\n",r);
    printf("%d",sum);
    return 0;
}