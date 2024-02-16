#include <stdio.h>
#include <limits.h>
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

  int max = INT_MIN;
  int smax = INT_MIN;
  for(int i = 0; i < size; i++) {
    if (max < arr[i]) {
      smax = max;
      max = arr[i];
    }
    else if(smax < arr[i] && max != arr[i]) smax = arr[i];
  }

  printf("\n\nThe second greatest number in the array = %d\n\n", smax);

  return 0;
}