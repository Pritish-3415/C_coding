#include<stdio.h>
int main(){
    int n, sum;
    int a=0;
    int b=1;
    printf("Enter the numbers");
    scanf("%d",&n);
    int num=0;
    for(int i=1;i<=n-2;i++){
        printf("%d " , a);
    sum = a+b;
    a=b;
    b=sum;
    printf("the %d fibonacci number is %d\n",i,sum);
    }

    return 0;
}