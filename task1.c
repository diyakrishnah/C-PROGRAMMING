//even or odd
#include<stdio.h>
int main(){
   int number;
   printf("\nEnter a number:");
   scanf("%d",&number);
   if (number%2==0){
        printf("\n it is a even number");
   }
   else{
       printf("\n it is an odd number");
   }
   return 0;
}
