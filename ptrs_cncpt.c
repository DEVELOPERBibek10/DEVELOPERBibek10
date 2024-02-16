#include <stdio.h>

int main() {

  int x = 38;
  int *y =&x;

  int **a = &y;

  printf("%p\n", y);
  printf("%p\n", &x);
  printf("%p\n", a);
  printf("%p\n", &y);
  printf("%d\n", *y);
  printf("%d\n", x);
  printf("%d\n", **a);


  return 0;
}