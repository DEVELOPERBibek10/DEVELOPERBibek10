#include <stdio.h>

int main() {

  int n;
  int m;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\nEnter the number of columns : ");
  scanf("%d", &m);

  printf("\n");

  if(n%2 != 0) {
    for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
        if(i==1 || i==n || j == 1 || j==m) {
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
    printf("Please try entering the odd number for Star plus pattern.\n");
  }

  printf("\n");

  return 0;
}