#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    // if(a>b && a>c){
    //     printf("the greatest number is %d\n: ",a);
    // }else if (b>a && b>c)
    // {
    //      printf("the greatest number is %d\n: ",b);
    // }else{
    //     printf ("the greatest number is %d\n : ",c);
    // }
    
    if(a+b>c && b+c>a && a+c>b){
        printf("this is a tringle");
    }else{
        printf("the is not trongle");
    }
    return 0;
}
