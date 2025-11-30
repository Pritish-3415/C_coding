#include<stdio.h>
void China(){
    printf("Chinese\n");
    return;
}
void England(){
    printf("British\n");
    return;
}
void India(){
    printf("Indian\n");
    England();
    return;
}
int main(){
    India();
    China();
    return 0;
}