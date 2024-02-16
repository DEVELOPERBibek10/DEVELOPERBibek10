#include <stdio.h>

int main() {

  int n;
  int a = 1;
  int b = 1;
  int sum = 1;
  printf("\nEnter a number : ");
  scanf("%d", &n);

  printf("\n");


  for(int i = 1; i <= n-2; i++) {
    sum = a+b;
    a = b;
    b = sum;
  }

  printf("\nThe %dth fibonacci term is %d.\n\n", n, sum);

  return 0;
}