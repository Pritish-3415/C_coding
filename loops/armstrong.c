#include<stdio.h>
int main(){
    int n,ld;
    printf("Enter the number that you want to insert ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        ld=n%10;//last digit
        sum=sum+(ld*ld*ld);
        n=n/10;
    }
    printf("%d",sum);


    return 0;

}