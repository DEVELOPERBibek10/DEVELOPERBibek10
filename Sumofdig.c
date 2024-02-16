#include <stdio.h>

int main(){
  
int n;
int sum=0;
int ld=0;
printf("\nEnter a number : ");
scanf("%d",&n);

while(n!=0){
ld = n%10;
sum += ld;
n = n/10; 
}

printf("\nSum of digits in the given number is %d.\n\n",sum);

  
  return 0;
}