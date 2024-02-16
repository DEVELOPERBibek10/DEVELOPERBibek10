#include<stdio.h>

int main() {

  printf("\n");

  for(int i = 65; i <= 90; i++) {
    printf("%d ", i);
    char a = (char)i;
    printf("%c\n", a);
  }

  printf("\n");

  return 0;
}