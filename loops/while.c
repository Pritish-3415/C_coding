#include<stdio.h>
int main(){ 
    // int x=4,y,z;
    // y=--x;
    // z=x--;
    // printf("%d,%d,%d",x,y,z);
    // scanf("%d",&n);
    // int a=0;
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         a=1;
    //         break;
    //     }
    // }
    // if(a==0){
    //     printf("the number is prime");
    //     }else{
    //     printf("the number is not a prime number ");
    //     }
    int x=4,y=0,z;
    while(x>=0){
        if(x==y)
        break;
        else
        printf("\n%d%d",x,y);
        x--;
        y++;
        
    }
    return 0;
} 