#include<stdio.h>
int main(){
    int n,ld;
    printf("Enter the number you want to enter ");
    scanf("%d",&n);
    int sum=0;
    int rev=0;
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        rev=rev*10;
        rev=rev+ld;
        n=n/10;
    }
    printf("the sum of the number is : %d" ,sum);
    printf(" \n the reverse of the number is : %d ",rev);
    return 0;
}