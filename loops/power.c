#include<stdio.h>
int main(){
    int a,b;
    printf("enter the that you want to enter ");
    scanf("%d",&a);
    scanf("%d",&b);
    int po=1; 
    for(int i=1;i<=b;i++){
        po=po*a;
    }
    printf("%d",po);
    return 0;

}