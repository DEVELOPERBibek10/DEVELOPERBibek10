#include <stdio.h>

int main() {

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  if(n%2 != 0) {
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= n; j++) {
        if(i == j || i+j == n+1) {
          printf("*");
        }
        else {
          printf(" ");
        }
      }
      printf("\n");
    }
  }

  else {
    printf("Please try entering the odd number for star cross pattern.\n");
  }

  printf("\n");

  return 0;
}