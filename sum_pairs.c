#include <stdio.h>

int main() {

  int size;
  printf("\nEnter the size of array : ");
  scanf("%d", &size);

  int n;
  printf("\nEnter the number: ");
  scanf("%d", &n);

  printf("\n");

  int arr[size];
  for(int i = 0; i < size; i++) {
    printf("\nEnter the %d no element of array : ", i+1);
    scanf("%d", &arr[i]);
  }

  int count = 0;
  for(int i = 0; i < size; i++) {
    for(int j = i+1; j < size; j++) {
      if(arr[i]+arr[j] == n) {
        count++;
        printf("\n(%d,%d)\n", arr[i], arr[j]);
      }
    }
  }

  printf("\nThe number of pairs in the given array which sum is equal to %d = %d\n\n", n, count);

  return 0;
}