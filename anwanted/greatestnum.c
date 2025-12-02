#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter any number ");
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&x3);
    scanf("%d",&y1);
    scanf("%d",&y2);
    scanf("%d",&y3);
    m1 = (y2-y1)/(x2-x1); 
    m2 = (y3-y2)/(x3-x2);
    if(m1==m2){
        printf("it is the slope");
    //     printf("b is the smallest ");
    // }else if (c<b)
    // {
    //     printf("c is smallest");
    // }else if (a>c){
    //     printf("c is smallest");
    // }
    // else{
    //     printf("a is smllest");
    // }
return 0;
    }
} 

