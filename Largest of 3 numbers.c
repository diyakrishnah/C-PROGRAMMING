//Largest of three numbers
#include<stdio.h>
int main(){
  int number1,number2,number3;
  printf("\nEnter three numbers");
  scanf("%d%d%d",&number1,&number2,&number3);
  if (number1>number2){
        if (number1>number3){
            printf("%d is the largest number",number1);
      }
  }
  else if (number2>number3){
        printf("%d is the largest number",number2);
  }
  else{
        printf("%d is the largest number",number3);
  }
  return 0;
}
        
  

