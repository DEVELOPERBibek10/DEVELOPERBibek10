#include <stdio.h>

int main() {

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  for(int i = 1; i <= n; i++) {
    int x = 65;
    for(int j = 1; j <= i; j++) {
      if(i%2 == 0) {
        int d = x;
        char ch = (char)d;
        printf("%c ", ch);
        x++;
      }
      else {
        printf("%d ", j);
      }
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}