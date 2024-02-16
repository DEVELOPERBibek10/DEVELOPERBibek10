#include <stdio.h>

int main() {

  int min;
  int max;
  int count;

  printf("\nEnter minimum value : ");
  scanf("%d", &min);

  printf("\nEnter maximum value : ");
  scanf("%d", &max);
  printf("\nPrime numbers from %d to %d are : \n\n", min, max);

  for(int i = min; i <= max; i++) {
    count = 0;
    for(int j = 1; j <= i; j++) {
      if(i%j == 0) {
        count++;
      }
    }
    if(count == 2) {
      printf("%d ", i);
    }
  }

  printf("\n");
  printf("\n");

  return 0;
}