//factorial of a number using while loop
#include<stdio.h>
int main(){
  int temperature;
  printf("\nEnter the temperature in celcius:");
  scanf("%d",& temperature);
  if (temperature<0){
    printf("%d is freezing temperature", temperature);
  }
  else if(temperature>0 && temperature<10) {
    printf("%d is very cold temperature!", temperature);
  }
  else if(temperature>10 && temperature<20){
    printf("%d is cold whether", temperature);
  }  
  else if(temperature>20 && temperature<30){
    printf("%d is normal whether", temperature);
  }  
  else if(temperature>30 && temperature<40){
    printf("%d is hot whether", temperature);
  }
  else if(temperature>=40){
    printf("%d is very hot whether", temperature);
  }
  return 0;
}