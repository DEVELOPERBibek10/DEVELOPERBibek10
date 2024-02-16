#include <stdio.h>

int main(){
  
int n;
int sum=0;
int ed=0;
printf("\nEnter a number : ");
scanf("%d",&n);

while(n!=0){
ed = n%10;
if(ed%2==0){
sum += ed;
}
n = n/10; 
}

printf("\nSum of even digit in the given number is %d.\n\n",sum);

  return 0;
}