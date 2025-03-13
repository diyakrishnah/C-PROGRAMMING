
#include<stdio.h>
void oddoreven(int num);
int main(){
 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 oddoreven(num);
return 0;
}
void oddoreven(int num){
    if(num%2==0){
        printf("%d is a Even number!",num);
    }
    else{
        printf("%d is a odd number!",num);
    }
}

