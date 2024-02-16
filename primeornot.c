#include <stdio.h>

int main(){
  
  int n;
  int x=0;
  printf("\nEnter a number : ");
  scanf("%d",&n);
  
  for(int i=2; i<=n-1;i++){
    if(n%i==0){
      x=1;
      break;
    }
  }
  
  if(n==1){
    printf("\n1 is neighter composite nor prime.\n\n");
  }
  else if(x==0){
    printf("\nIt is a prime number.\n\n");
  }
  else{
    printf("\nIt is a composite number.\n\n");
  }
  
  
  return 0;
}