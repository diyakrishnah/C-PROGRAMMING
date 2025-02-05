#include<stdio.h>
int main(){
  int i,j,limit,temp;
  printf("\nEnter the number of elements:");
  scanf("%d",&limit);
  int number[limit];
  printf("\n Enter the %d elements",limit);
  for (i=0;i<limit;i++){
    scanf("%d",&number[i]);
  }
  for (i=0;i<limit-1;i++){
    for (j=0;j<limit-i;j++){
      if (number[j]>number[j+1]){
        temp=number[j];
        number[j]=number[j+1];
        number[j+1]=temp;
      }    
    }
  }
  printf("\nthe sorted array is ");
  for(i=0;i<limit;i++){
    printf("%d ",number[i]);
  }
  return 0;
}
  
    
    
    
