//reverse of a string
#include<stdio.h>
int main(){
  char string[15],temp;
  printf("Enter a charector:");
  scanf("%s",string);
  int length;
  for (length=0;string[length]!='\0';length++);
  int i=length-1;
  for (int j=0;j<length/2;j++){
  temp=string[i];
  string[i]=string[j];
  string[j]=temp;
  i--;
  }
  temp='\0';
  printf(" The reversed string is %s",string);
  return 0;
}
  
