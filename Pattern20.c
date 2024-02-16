#include <stdio.h>

int main() {

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n-i; j++) {
      printf(" ");
    }
    int x = 1;
    for(int k = 1; k <= 2*i-1; k++) {
      printf("%d", x);
      x++;
    }
    printf("\n");
  }
  
  printf("\n");

  return 0;
}