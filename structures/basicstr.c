#include<stdio.h>
int main(){
   struct pokemon
   {
    int hp;
    char speed;
    float attack;
   };
   struct pokemon pikachu;
    scanf("%d",&pikachu.hp);
    pikachu.speed = 20;
    printf("%d",pikachu.hp);

    return 0;
}