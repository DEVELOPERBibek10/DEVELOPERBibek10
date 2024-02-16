#include<stdio.h>

int main() {
  int a;
  int b;

  printf("\nEnter base : ");
  scanf("%d", &a);

  printf("\nEnter power : ");
  scanf("%d", &b);

  int power = 1;

  for(int i = 1; i <= b; i++) {
    power *= a;
  }

  printf("\n%d raised to the power %d is %d.\n\n", a,b, power);

  return 0;
}