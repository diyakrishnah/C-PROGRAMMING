#include<stdio.h>
int main(){
  int i,limit,maxima,minima,max,mini;
  printf("\nEnter the number of elements:");
  scanf("%d",&limit);
  int number[limit];
  printf("\n Enter the %d elements",limit);
  for (i=0;i<limit;i++){
    scanf("%d",&number[i]);
  }
  maxima=number[0];
  minima=number[1];
  for(i=0;i<limit;i++){
    if (number[i]>maxima){
      maxima=number[i];
      max=i+1;
    }
    if(number[i]<minima){
      minima=number[i];
      mini=i+1;
    }
  }
  printf("maxima is %d ,at the position %d",maxima,max);
  printf("\n minima is %d ,at the position %d",minima,mini);
  return 0;
}
    
    
