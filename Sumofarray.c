#include <stdio.h>

int main() {

  int arr[5];
  int sum = 0;
  for(int i = 0; i < 5; i++) {
    printf("\nEnter element no.%d : ", i+1);
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < 5; i++) {
    sum += arr[i];
  }

  printf("\nThe sum of elements in the array = %d\n\n", sum);

  return 0;
}