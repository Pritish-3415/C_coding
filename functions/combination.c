#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2 ; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n,r;
printf("enter 1st number : ");
scanf("%d",&n);
printf("enter 2nd number : ");
scanf("%d",&r);
int nrf=factorial(n)/(factorial(r)*factorial(n-r));
    
    printf("the combination of this code is : %d", nrf);
    return 0;
}
