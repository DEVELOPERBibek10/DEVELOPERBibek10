#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime_f(int x) {
  bool flag = true;
  for(int i = 2; i <= sqrt(x); i++) {
    if(x%i == 0) {
      flag = false;
      break;
    }
  }

  if(x == 1) flag = false;
  return flag;
}
int main() {

  int x;
  printf("\nEnter the number : ");
  scanf("%d", &x);

  printf("\n The prime factor of %d are as follows :\n\n", x);

  for(int i = 1; i <= x; i++) {
    if(x%i == 0) {
      if(prime_f(i) == true) {
        printf(" %d", i);
      }
    }
  }

  printf("\n\n");

  return 0;
}