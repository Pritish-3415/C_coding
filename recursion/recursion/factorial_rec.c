#include<stdio.h>
int fact(int a){
    if(a==1)return 1;
    int recANS = a*fact(a-1); 
    return recANS;
   
}
int main(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    int factorial = fact(a);
     printf("the square root of the number is : %d ",factorial);
   
}