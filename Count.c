#include <stdio.h>

int main(){
  
int n;
int count=0;

printf("\nEnter a number : ");
scanf("%d",&n);

while(n!=0){
n = n/10; 
count ++;
}

printf("\nIt is %d digits number\n\n",count);

  
  return 0;
}