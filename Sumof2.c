#include <stdio.h>

int add(int x, int y) {
  return x+y;
}

int main() {

  int a,
  b,
  sum;

  printf("\nEnter the first number : ");
  scanf("%d", &a);

  printf("\nEnter the second number : ");
  scanf("%d", &b);

  sum = add(a, b);

  printf("\nSum = %d\n\n", sum);

  return 0;

}