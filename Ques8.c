#include<stdio.h>

int main(){
  // WAP a program to print GP which starts from 3 without using formula.
  
  int n,x;
  
  printf("\nEnter the number of times that loop will run : ");
  scanf("%d",&n);
  
  x = 3;
  
  for(int i = 1; i<=n; i++){
    printf("\n%d ",x);
    x *= 4;
  }
  
  return 0;
}