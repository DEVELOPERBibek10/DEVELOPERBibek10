#include <stdio.h>

int main(){
  
  int n;
  
  printf("\nEnter a number : ");
  scanf("%d",&n);
  
  printf("\n");
  
  for(int i = n  ; i<=n*10 ; i+=n){
    printf("%d ",i);
  }
  
  printf("\n\n");
  return 0;
}