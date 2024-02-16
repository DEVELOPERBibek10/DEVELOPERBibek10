#include <stdio.h>

int main(){
  
// 1-2 + 3-4 + 5-6 + ....n.
  
int n;
int sum =0;
printf("\nEnter a number : ");
scanf("%d",&n);

for(int i = 1 ; i <= n ; i++){
  if (i%2!=0) sum += i;
  else sum -= i;
}

printf("\nThe sum of series is %d.\n\n",sum);

  
  return 0;
}