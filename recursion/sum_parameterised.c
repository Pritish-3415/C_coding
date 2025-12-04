#include <stdio.h>
void sum(int a, int b) {
  if(a==0)
  return;
  sum(a-1,b+a);
  printf("%d",b);
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    sum(a,0);  // call recursive function
    return 0;
}
