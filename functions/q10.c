#include <stdio.h>
int main() {
    int base, exp;
    long long power = 1;  // use long long to handle large results

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (int i = 1; i <= exp; i++) {
        power = power * base;   // multiply base exp times

    }

    printf("%d ^ %d = %lld\n", base, exp, power);
    return 0;
}
