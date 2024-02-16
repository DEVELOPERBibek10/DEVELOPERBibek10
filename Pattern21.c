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
    int x = 65;
    for(int k = 1; k <= 2*i-1; k++) {
      int y = x;
      char ch = (char)y;
      printf("%c", ch);
      x++;
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}