#include<stdio.h>

int main() {

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  for(int i = 1; i <= n; i++) {
    for(int j = n; j >= i; j--) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}