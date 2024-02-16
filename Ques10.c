#include<stdio.h>

int main(){
  // WAP a program to print GP which starts from 10 without using formula.
  
  float x;
  int n;
  
  printf("\nEnter the number of times that loop will run : ");
  scanf("%d",&n);
  
  x = 100;
  
  for(int i = 1; i<=n; i++){
    printf("\n%f ",x);
    x *=0.5;
  }
  
  return 0;
}