#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2 ; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int combination(int n, int r){
    int nrf=factorial(n)/(factorial(r)*factorial(n-r));
    return nrf;
 }

int main(){
    int n,r,c;
printf("enter 1st number : ");
scanf("%d",&n);

for(int i = 0; i<=n; i++){
    for(int j = 0; j<=i; j++){
        c=combination(i,j);
        printf("%d ",c);
    }
    printf("\n");
}

    return 0;

}