#include <stdio.h>

void num(int x, int a) {
    if (x>a) {
        return;
      }  // base case to stop recursion

    printf("%d \n", x);
    num(x+1,a);   // recursive call
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    num(1,a);  // call recursive function
    return 0;
}
