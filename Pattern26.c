#include <stdio.h>

int main() {

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= 2*n-1; j++) {
      if (j <= n+1-i || j >= n-1+i) {
        printf("%d", j);
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }


  return 0;
}