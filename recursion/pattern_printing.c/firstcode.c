#include <stdio.h>
int main(void){
    char a,b,c;
    // Leading space in " %c" skips any whitespace/newlines
    scanf(" %c %c %c", &a, &b, &c);
    printf("%c %c %c\n", a, b, c);
    return 0;
}
