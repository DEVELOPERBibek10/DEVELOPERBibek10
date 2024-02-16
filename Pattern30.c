#include <stdio.h>

int main() {
  
   // Special code.
  // for n = 4.
  // 1111111
  // 1222221
  // 1233321
  // 1234321
  // 1233321
  // 1222221
  // 1111111

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
      printf("%d", mini);
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}