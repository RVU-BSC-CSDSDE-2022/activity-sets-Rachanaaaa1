#include<stdio.h>
int main()
{
  int sidea , sideb , sidec;
  printf("enter three sides of the triangle");
  scanf("%d%d%d",&sidea,&sideb,&sidec);
  if(sidea==sideb && sideb==sidec)
  {
    printf("this is an equilateral triangle:\n");
  }
  else if(sidea==sideb || sidea==sideb || sideb==sidec)
  {
    printf("this is an isosceles triangle :\n");
  }
  else {
    printf("this is an scalear triangle");
  }
  return 0;
}