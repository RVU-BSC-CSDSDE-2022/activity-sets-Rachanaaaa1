#include <stdio.h>
int main(){
  int input();
  int a,b,sum;
  printf("Enter two numbers:");
  scanf("%d %d",&a,&b);
  sum=a+b;
  printf("The sum of the two numbers is: %d+%d=%d",a,b,sum);
  return 0;
}
