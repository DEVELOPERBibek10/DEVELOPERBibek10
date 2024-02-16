#include<stdio.h>

int main(){
  // WAP a program to print GP which starts from 100 with common difference of 3 in decreasing order until it is posktive.
  
  int n,x;
  
  // printf("\nEnter the number of times that loop will run : ");
  // scanf("%d",&n);
  
  x = 100;
  
  for(int i = 1; x>0; i++){
    printf("\n%d ",x);
    x -= 3;
  }
  
  return 0;
}