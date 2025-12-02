#include<stdio.h>
int main (){
    int p,q,r;
    printf("Enter any number");
    // scanf("%d",&p);
    // scanf("%d",&q);

    // printf("the value of the user that is given is %d\n", p);
    // printf("the value of the user that is given is %d \n", q);
     scanf("%d %d", &p, &q);

    // printf("p = %d q = %d ",p,q);
    r = p % q;
    printf("the remainder of the number r = %d",r);
    return 0;

}