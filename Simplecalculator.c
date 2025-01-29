//Simple calculator
#include<stdio.h>
int main(){
  int number1,number2,sum,difference,multiplication,division,reminder;
  printf("\nEnter two numbers:");
  scanf("%d%d",&number1,&number2);
  char operations;
  printf("\n enter an operator");
  scanf(" %c",&operations);
  sum=number1+number2;
  difference=number1-number2;
  multiplication=number1*number2;
  division=number1/number2;
  reminder=number1%number2;
  switch (operations){
    case '+' :
      printf("sum is %d",sum);
      break;
    case '-':
      printf("difference is %d",difference);
      break;
    case '*':
      printf("multiplication is %d",multiplication);
      break;
    case '/':
      printf("division is %d",division);
      break;
    case '%':
      printf("reminder is %d",reminder);
      break;
  }
  return 0;
}
  
  
  
