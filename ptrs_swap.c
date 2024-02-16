#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
  return;
}


int main() {

  int a;
  int b;

  printf("\nEnter the first number : ");
  scanf("%d", &a);

  printf("\nEnter the second number : ");
  scanf("%d", &b);

  swap(&a, &b);

  printf("\nThe swapped value of a = %d\n", a);
  printf("\nThe swapped value of b = %d\n\n", b);

  return 0;
}