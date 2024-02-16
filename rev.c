#include <stdio.h>

int main() {

  int n;
  int rem = 0;
  printf("\nEnter a number : ");
  scanf("%d", &n);

  while(n != 0) {
    rem *= 10;
    rem += (n%10);
n = n/10;
}

printf("\nThe reversed number is %d.\n\n", rem);


return 0;
}