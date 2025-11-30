#include<stdio.h>
int add (int x, int y){
    return x+y;
}
int main(){
    int a , b;
    printf("enter any numbers");
    scanf("%d",&a);
    printf("enter any numbers");
     scanf("%d",&b);
     int sum = add(a , b);
     printf("%d",sum);
    return 0;

}