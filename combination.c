#include <stdio.h>

int factorial(int x) {
  int fact = 1;
  for(int i = 1; i <= x; i++) {
    fact *= i;
  }
  return fact;
}

int main() {

  int n;
  int r;

  printf("\nEnter n : ");
  scanf("%d", &n);

  printf("\nEnter r : ");
  scanf("%d", &r);

  int ncr = factorial(n)/(factorial(r)* factorial(n-r));
  printf("\nncr = %d\n\n", ncr);

  return 0;
}