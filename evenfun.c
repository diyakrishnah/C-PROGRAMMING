/*check even or odd using function
Author:Diya krishna
date:17/03/2025*/
#include<stdio.h>
int even(int num);
int main(){
  int num,check;
  printf("Enter a number:");
  scanf("%d",&num);
  check=even(num);
  if (check==1){
    printf("The given number is even.");
  }
  else{
    printf("The given number is odd.");
  }
  return 0;
  }
  int even(int num){
    if (num%2==0){
      return 1;
      }
    else{
      return 0;
      }
    }
  
