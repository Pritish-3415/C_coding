#include<stdio.h>
int main(){
    int n;
    float a;
    printf("enter how many time you want to print he value  number ");
    scanf("%d",&n);
    printf("enter the syarting number ");
    scanf("%f",&a);
    for(int i = 1; i <= n; i++){
        printf("%.2f",a);
        a=a/2;

    }
    return 0;
}