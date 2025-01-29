//factorial of a number using while loop
#include<stdio.h>
int main(){
  int number,factorial;
  printf("\nEnter a number:");
  scanf("%d",&number);
  factorial=1;
  if (number>0){
    while (number>0){
    factorial=factorial*number;
    number-=1;
    }
    printf("%d is the factorial",factorial);
  }
  else{
    printf("it is a negative number!");
  }
  return 0;
}
