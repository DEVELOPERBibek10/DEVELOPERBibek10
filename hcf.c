#include <stdio.h>

int min(int x, int y) {
  if (x < y) return x;
  else return y;
}


int gcd(int x, int y) {
  int hcf;
  for(int i = 1; i <= min(x, y); i++) {
    if (x%i == 0 && y%i == 0) {
      hcf = i;
    }
  }
  return hcf;
}



int main() {

  int x;
  printf("\nEnter the 1st number : ");
  scanf("%d", &x);
  int y;
  printf("\nEnter the 2nd number : ");
  scanf("%d", &y);

  int hcf = gcd(x, y);

  printf("\nThe HCF/GCD of %d and %d = %d \n\n", x, y, hcf);

  return 0;
}