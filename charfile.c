#include<stdio.h>
int main(){
  FILE *fp;
  fp=fopen("charect.txt","r");
  char chr;
  int wordcount=0,sentancecount=0,charcount=0,linecount=0;
  while(fscanf(fp,"%c",&chr)==1){
  charcount++;
    if(chr==' '){
        wordcount++;
    }if(chr=='.'){
        sentancecount++;
   }if(chr=='\n'){
      linecount++;
   }
   }
   printf("\nWord count=%d",wordcount);
   printf("\nSentance count=%d",sentancecount);
   printf("\nLine count=%d",linecount);
   printf("\nCharecter count=%d",charcount);
   return 0;
 }
    
  
