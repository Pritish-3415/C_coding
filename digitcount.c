#include<stdio.h>
int main(){
    int n;
    printf("enter that you want to chech");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a++;
            break;
        }
    }
    
    if(a==0){
            printf("the number is a prime");
     } else{
    printf("the number is not prime");
    return 0;
    }
}