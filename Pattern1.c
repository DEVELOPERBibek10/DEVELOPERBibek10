#include<stdio.h>

int main() {

  int n;
  int m;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\nEnter the number of columns : ");
  scanf("%d", &m);

  printf("\n");

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      printf("* ");
    }
    printf("\n");
  }
  
  printf("\n");

  return 0;
}