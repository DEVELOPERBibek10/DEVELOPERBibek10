#include <stdio.h>

int main() {

  int n;
  int x = 1;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");


  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      printf("%d", x);
      x++;
    }
    printf("\n");
  }


  printf("\n");

  return 0;
}