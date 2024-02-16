#include<stdio.h>

int main() {
  
  // WAP to print the odd triangle pattren.

  int n;
  int a;
  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  for(int i = 1; i <= n; i++) {
    a = 1;
    for(int j = 1; j <= i; j++) {
      printf("%d", a);
      a = a+2;
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}