#include<stdio.h>

int main() {

  int sum;
  int min;
  int max;
  int arms;
  int n;
  int r;

  printf("\nEnter minimum value : ");
  scanf("%d", &min);

  printf("\nEnter maximum value : ");
  scanf("%d", &max);

  printf("\nArmstrong number from %d to %d is given below:\n\n", min, max);

  for(int i = min; i <= max; i++) {
    n = i;
    arms = n;
    sum = 0;
    while(n != 0) {
      r = n%10;
      sum += r*r*r;
      n /= 10;
    }
    if(sum == arms) {
      printf("%d\n", sum);
    }
  }
  printf("\n");
  return 0;
}