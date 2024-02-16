#include <stdio.h>

void reverse(int arr[], int si, int ei) {
  int temp;
  for(int i = si, j = ei; i <= j; i++,j--) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  return;
}

int main() {

  int size;
  int k;

  printf("\nEnter the size of array : ");
  scanf("%d", &size);

  printf("\nEnter the number of rotations : ");
  scanf("%d", &k);

  int arr[size];
  for(int i = 0; i < size; i++) {
    printf("\nEnter the %d no element of array : ", i+1);
    scanf("%d", &arr[i]);
  }

  printf("\nThe reversed array is given below.\n\n");
  reverse(arr, 0, size-1);
  reverse(arr, 0, k-1);
  reverse(arr, k, size-1);
  for(int j = 0; j < size; j++) {
    printf("%d ", arr[j]);
  }


  printf("\n\n");

  return 0;
}