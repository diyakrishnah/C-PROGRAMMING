//diya
//frequency
#include<stdio.h>
#include<string.h>
int main(){
  char string[200];
  int count[26]={0};
  printf("Enter a string:");
  fgets(string,sizeof(string),stdin);
  //printf("enter the charecter you want to count:");
  //scanf("%d",count);
  for (int i=0;string[i]!='\0';i++){
   char ch=string[i];
   if(ch>='A'&& ch<='Z'){
     ch=ch+32;
     }
    if (ch>='a'&& ch<='z'){
    count[ch-97]++;
    }
  }
  printf("Charecter frequency :\n");
  for (int i=0;i<26;i++){
    if (count[i]>0){
      printf("%c=%d\n",i+97,count[i]);
     }
    }
    return 0;
}

