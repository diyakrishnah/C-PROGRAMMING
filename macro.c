/*author:diyakrishna
date:26/03/2025
program:Using Macros: Define a macro for the value of π (PI = 3.14159) and write a program to calculate the area of a circle and a cylinder. Use macros for constant values.*/
#include<stdio.h>
#define pi 3.14159
int main(){
  int rad,height;
  float circlearea,cylinderarea;
  printf("Enter the radius and height:");
  scanf("%d%d",&rad,&height);
  circlearea=pi*rad*rad;
  cylinderarea=(2*pi*rad*height)+(2*pi*rad*height);
  printf("The area of the circle is %f and cylinder is %f",circlearea,cylinderarea);
  return 0;
}
