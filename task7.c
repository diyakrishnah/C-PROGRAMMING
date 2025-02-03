#include<stdio.h>

int main(){
 int number;
 printf("\n Enter the number of a month");
 scanf("%d",&number);
 switch(number){
  case 1 :
  printf("it's January");
  break;
  case 2 :
  printf("it's February y");
  break;
  case 3:
  printf("it's March");
  break;
  case 4 :
  printf("it's April");
  break;
  case 5 :
  printf("it's May");
  break;
  case 6 :
  printf("it's June");
  break;
  case 7 :
  printf("it's July");
  break;
  case 8 :
  printf("it's august");
  break;
  case 9 :
  printf("it's September");
  break;
  case 10 :
  printf("it's October");
  break;
  case 11 :
  printf("it's november");
  break;
  case 12 :
  printf("it's December");
  break;
  default:
  printf("invalid month");
  break;
 }
 return 0;
}