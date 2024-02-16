#include <stdio.h>

int main() {

  int marks[10];

  for(int i = 0; i < 10; i++) {
    printf("\nEnter element no.%d : ", i);
    scanf("%d", &marks[i]);
  }

  printf("\n\n");

  for(int i = 0; i < 10; i++) {
    if(marks[i] < 35) {
      printf("%d ", i);
    }
  }



  return 0;
}