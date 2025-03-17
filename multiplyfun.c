/*multiplication using function
Author:Diya krishna
date:17/03/2025*/
#include<stdio.h>
void multiply(int num1,int num2);
int main(){
  int num1,num2;
  printf("Enter two numbers");
  scanf("%d%d",&num1,&num2);
  multiply(num1,num2);
  return 0;
  }
  void multiply(int num1,int num2){
  int mul;
  mul=num1*num2;
  printf("The product of this two numbers are %d",mul);
  }
    
  
