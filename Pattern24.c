#include <stdio.h>

int main() {

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  for(int i = 0; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      printf(" ");
    }

    for(int k = 1; k <= n-i; k++) {
      printf("*");
    }
    printf("\n");
  }


  return 0;
}