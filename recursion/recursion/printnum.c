#include <stdio.h>

void num(int a) {
    if (a == 0)
        return;  // base case to stop recursion

    printf("Good morning\n");
    num(a - 1);   // recursive call
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    num(a);  // call recursive function
    return 0;
}
