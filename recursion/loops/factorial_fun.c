#include<stdio.h>
int fact(int a){
    int factorial=1;
    for(int i = 1; i<= a; i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    int factorial = fact(a);
     printf("the square root of the number is : %d ",factorial);
   
}