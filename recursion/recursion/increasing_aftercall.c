#include <stdio.h>

void num(int a) {
    if (a == 0) {
        return;
      }  // base case to stop recursion
    printf("%d ", a);
         num(a - 1); 
          printf("%d ", a);
     // recursive call
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    num(a);  // call recursive function
    return 0;
}
