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
  int max = arr[0];
  for(int i = 1; i <= size; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }

  printf("\n\nThe greatest number in the array = %d\n\n", max);

  return 0;
}