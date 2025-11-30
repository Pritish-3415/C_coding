#include<stdio.h>
int main(){ 
    int n;
    printf("Enter your number");
    scanf("%d",&n);
    int a = 0;
    for(int i = 2; i<n; i++){
        if(n%i==0){
        a=1;
        break;
    }
        
    }
    if(a==0){ 
        printf("the number is a prime");
    }else{
        printf("the the number is composite");
    }
    return 0;
}