#include <stdio.h>

void reverse(int arr[], int size) {
  int temp;
  int i = 0;
  int j = size-1;
  while(i < j) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  return;
}

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

  printf("\nThe reversed array is given below.\n\n");
  reverse(arr, size);
  for(int j = 0; j < size; j++) {
    printf("%d ", arr[j]);
  }


  printf("\n\n");

  return 0;
}