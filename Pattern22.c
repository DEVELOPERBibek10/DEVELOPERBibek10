#include <stdio.h>

int main() {

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  for(int i = 1; i <= n; i++) {
    int y = i-1;
    for(int j = 1; j <= n-i; j++) {
      printf(" ");
    }

    for(int k = 1; k <= i; k++) {
      printf("%d", k);
    }

    for(int l = 1; l <= i-1; l++) {
      printf("%d", y);
      y--;
    }
    printf("\n");
  }


  printf("\n");

  return 0;
}