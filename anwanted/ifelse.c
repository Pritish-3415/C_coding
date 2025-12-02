#include<stdio.h>
int main(){
//     int a,b;
//     scanf("%d",&a);
//     b=2%a;
//     printf("%d",b);23
    int n,f;
     printf("enter your cost price");
    scanf("%d",&n);
    printf("enter you salling price");
    scanf("%d",&f);
    if(n>f){
        printf("loss");
    }else{
        printf("profit");
    }
    return 0;
// 
}