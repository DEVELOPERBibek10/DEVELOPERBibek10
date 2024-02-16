#include <stdio.h>

int main() {

  int n;
  int size;

  printf("\nEnter the size of array : ");
  scanf("%d", &size);

  printf("\n");

  printf("\nEnter the number : ");
  scanf("%d", &n);

  int arr[size];
  for(int i = 0; i < size; i++) {
    printf("\nEnter the %d no element of array : ", i+1);
    scanf("%d", &arr[i]);
  }

  int count = 0;
  for(int i = 0; i < size; i++) {
    if(arr[i] > n) count++;
  }

  printf("\nThe quantity of number greater than the given number %d = %d\n\n", n, count);

  return 0;
}