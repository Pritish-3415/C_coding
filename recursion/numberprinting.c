#include<stdio.h>
void decreasing(int d){
    if(d == 0){
        return;
    }
    printf("%d ", d);  // print before the recursive call
    decreasing(d - 1);
}

int main(){
    int d;
    printf("Enter number: ");
    scanf("%d", &d);
    decreasing(d);
    return 0;
}
