#include<stdio.h>

int main() {

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n+1-i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}