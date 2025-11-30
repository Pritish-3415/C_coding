#include <stdio.h>
int main() {
    int n, sum;
    int a = 0, b = 1;

    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("The %d Fibonacci number is %d\n", i, a);
        sum = a + b;
        a = b;
        b = sum;
    }

    return 0;
}
