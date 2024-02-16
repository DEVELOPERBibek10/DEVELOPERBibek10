#include<stdio.h>

int main(){
  // WAP a program to print AP which starts from 4 without using formula.
  
  int n,x;
  
  printf("\nEnter the number of times that loop will run : ");
  scanf("%d",&n);
  
  x = 4;
  
  for(int i = 1; i<=n; i++){
    printf("\n%d ",x);
    x += 3;
  }
  
  return 0;
}