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

  int sumeven = 0;
  int sumodd = 0;
  for(int i = 0; i < size; i++) {
    if(i%2 == 0) sumeven += arr[i];
    else sumodd += arr[i];
  }

  int reasult = sumeven-sumodd;

  printf("\nThe difference between sum of even indexed number and odd indexed number = %d\n\n", reasult);

  return 0;
}