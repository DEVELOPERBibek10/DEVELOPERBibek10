#include <stdio.h>

int main() {

  int n;
  int a = 1;
  int b = 1;
  int sum = 1;
  printf("\nEnter a number : ");
  scanf("%d", &n);

  printf("\n");

  printf("The first %d Fibonacci numbers are: ", n);

  for(int i = 1; i <= n; i++) {
    printf("%d ", a);
    sum = a+b;
    a = b;
    b = sum;
  }

  printf("\n");

  return 0;
}