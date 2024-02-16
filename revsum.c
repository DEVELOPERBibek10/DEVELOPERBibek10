#include <stdio.h>

int main(){
  
int n,rev=0,temp;
printf("\nEnter a number : ");
scanf("%d",&n);

temp=n;

while(temp!=0){
rev = rev * 10 + temp%10;
temp /= 10; 
}

printf("\nThe reversed number is %d.\n\n",rev);
printf("The sum of reversed number and orginal number is  %d.\n\n",rev+n);

  
  return 0;
}