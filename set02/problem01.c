
#include<stdio.h>

 void calc_area(float base,float height,float *area)
{
    float s = (height+base)/2;
 

    *area = sqrt(s*(s-height)*(s-base));
}
int main()
{
    float height,base,area;
    printf("\nEnter three sides of triangle\n");
    scanf("%f%f%f",&base,&height,&area);

    calc_area(base,height,&area);
 

    printf("\n Area of triangle: %.2f\n",area);
 
    return 0;
}