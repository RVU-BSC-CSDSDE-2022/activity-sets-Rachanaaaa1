#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main(){
  float radius,height,length;
  input_camel_details(&radius,&height,&length);
  float weight = find_weight(radius,height,length);
  output(radius,height,length,weight);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length){
  printf("Enter the radius , height and length \n");
  scanf("%f %f %f",radius,height,length);
}

float find_weight(float radius, float height, float length){
  float pi = 3.1415;
  float weight = pi * (radius * radius * radius) * sqrt(height * length);
  return weight;
}

void output(float radius, float height, float length, float weight){
  printf("The weight of the camel with radius : %0.1f ,height : %0.1f , length : %0.1f is %0.4f",radius,height,length,weight);
  
}