#include <stdio.h>

int main() {

  int n;
  int product = 1;
  printf("\nEnter a number : ");
  scanf("%d", &n);
  
  printf("\n");

  for(int i = 1; i <= n; i++) {
    product *= i;
    printf("The factorial of %d is %d.\n", i, product);
  }
  
  printf("\n");

  return 0;
}