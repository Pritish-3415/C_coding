#include<stdio.h>
void swap(int *x, int *y){
    int temp; 
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    a=2;
    b=3;
    swap(&a,&b);
    printf("%d ", a);
    printf("%d ", b);

    return 0;
}