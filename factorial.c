#include <stdio.h>

int main(){
  
int n;
int product = 1;
printf("\nEnter a number : ");
scanf("%d",&n);

for(int i = 1 ; i <= n ; i++){
  product *= i;
}

printf("\nThe factorial of %d is %d.\n\n",n,product);

return 0;
}