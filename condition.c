#include<stdio.h>
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    // if(n>99 && n<1000){
    //     printf("the number is a three digit number  ");
    // }else{
    //     printf("the number is not a three digit number");
        if(n%15==0){
            printf("it is divisible by both thr numbers 3 and 5");
        }else{
            printf("it is not divisible by 3 and 5");
        }
    }
