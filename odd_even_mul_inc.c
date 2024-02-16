#include <stdio.h>

int main() {

  int size;
  printf("\nEnter the size of array : ");
  scanf("%d", &size);
  printf("\n");
  int arr[size];
  for(int i = 0; i < size; i++) {
    printf("\nEnter the %d no element of array : ", i+1);
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < size; i++) {
    if(i%2 != 0) {
      arr[i] *= 2;
    }
    else {
      arr[i] += 10;
    }
  }

  printf("\n\n");

  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n\n");

  return 0;
}