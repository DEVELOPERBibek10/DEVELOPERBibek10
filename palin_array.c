#include <stdio.h>

void palin(int arr[], int size) {
  int flag = 0;
  for(int i = 0; i <= size/2 && size != 0; i++) {
    if (arr[i] != arr[size-i-1]) {
      flag = 1;
      break;
    }
  }

if(flag == 1) printf("\nIt is not a palindrome.\n\n");
    else printf("\nIt is a palindrome.\n\n");
    
  return;
}

int main() {

  int size;
  int i;
  int j;
  printf("\nEnter the size of array : ");
  scanf("%d", &size);

  printf("\n");

  int arr[size];
  for(i = 0; i < size; i++) {
    printf("\nEnter the %d no element of array : ", i+1);
    scanf("%d", &arr[i]);
  }

  palin(arr, size);

  return 0;
}