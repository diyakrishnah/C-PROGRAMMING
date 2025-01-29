//vowels
#include<stdio.h>
int main(){
  char letter;
  printf("\nEnter a alphabet:");
  scanf(" %c",&letter);
  if (letter='a'||'A'|| 'e'||'E'||'i'||'I'||'o'||'O'||'u'||'U'){
      printf("It is a vowel");
  }
  else{
      printf("It is a consonant");
  }
  return 0;
}
  
