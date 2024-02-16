#include <stdio.h>

int main(){
  
// 1-2 + 3-4 + 5-6 + ....n.
// more efficient than the code in Sumofseries.c file (done qith the help of loop.)
int n;
int sum =0;
printf("\nEnter a number : ");
scanf("%d",&n);

if (n%2 == 0){
  sum = -n/2 ;
}
else{
  sum = -n/2 + n ;
}

printf("\nThe sum of series is %d.\n\n",sum);

return 0;
}