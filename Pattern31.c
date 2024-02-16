#include <stdio.h>

int main() {

  // Special code.
  // for n = 4.
  // 4444444
  // 4333334
  // 4322234
  // 4321234
  // 4322234
  // 4333334
  // 4444444

  int n;

  printf("\nEnter the number of rows : ");
  scanf("%d", &n);

  printf("\n");

  int mini = 0;
  for(int i = 1; i <= 2*n-1; i++) {
    for(int j = 1; j <= 2*n-1; j++) {
      int a = i;
      if(a > n) a = 2*n-i;
      int b = j;
      if(b > n) b = 2*n-j;
      if(a < b) mini = a;
      else mini = b;
      printf("%d", n+1-mini);
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}