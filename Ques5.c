#include<stdio.h>

int main(){
  
  int n;
  
  printf("\nEnter a number : ");
  scanf("%d",&n);
  
  printf("\n");
  
  for(int i = 4; i<=3*n-1; i+=3){
    printf("%d ",i);
  }
  
  printf("\n\n");
  return 0;
}