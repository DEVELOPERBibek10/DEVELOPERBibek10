#include<stdio.h>

int main() {

  int sum = 0;
  int i;
  int arms;
  int n;
  int r;

  printf("Armstrong number from 1 to 500 is given below:\n\n");

  for(i = 1; i <= 500; i++) {
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