#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main(){
  float x1, y1, x2, y2, x3, y3;
  int result;
  input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
  result = is_triangle(x1, y1, x2, y2, x3, y3);
  output(x1, y1, x2, y2, x3, y3, result);
  return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
  printf("Enter the x and y values of Triangle 1: ");
  if(scanf("%f %f", x1, y1));
  printf("Enter the x and y values of Triangle 2: ");
  if(scanf("%f %f", x2, y2));
  printf("Enter the x and y values of Triangle 3: ");
  if(scanf("%f %f", x3, y3));
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  int result;
  result = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
  printf("%d\n",result);
  return result;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
  if(result == 0)
    printf("The points (%f, %f), (%f, %f) and (%f %f) do not form a triangle\n", x1, y1, x2, y2, x3, y3);
  else
    printf("The points (%f, %f), (%f, %f) and (%f %f) forms a triangle\n", x1, y1, x2, y2, x3, y3);
}