//compare a string
#include<stdio.h>
#include<string.h>
int main(){
 char string1[15],string2[15];
 printf("Enter first string:");
 scanf("%s",string1);
 printf("Enter second string:");
 scanf("%s",string2);
 if (strcmp(string1,string2)==0){
    printf("same");
  }
  else {
  printf(" notsame");
  }
 return 0;
}
