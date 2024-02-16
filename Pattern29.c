#include <stdio.h>

int main() {

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  int mini = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
      if(i < j) mini = i;
      else mini = j;
      printf("%d", mini);
    }
    printf("\n");
  }
  
  printf("\n");

  return 0;
}