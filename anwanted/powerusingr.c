#include<stdio.h>
int powe(int a, int b){
    if(b==0)return 1;
    int power = a*powe(a,b-1); 
    return power;
}
int main(){
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter a number");
    scanf("%d",&b);
    int power = powe(a,b);
     printf("the square root of the number is : %d ",power);
   
}