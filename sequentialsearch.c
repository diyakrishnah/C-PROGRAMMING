#include<stdio.h>
int main(){
  int i,limit,item;
  printf("\nEnter the number of elements:");
  scanf("%d",&limit);
  int array[limit];
  printf("\n Enter %d elements:",limit);
  for(i=0;i<limit;i++){
    scanf("%d",&array[i]);
  }
  printf("\nEnter the element to search:");
  scanf("%d",&item);
  for(i=0;i<limit;i++){
    if (item==array[i]){
      printf("\nThe given element found at the position %d .",i+1);
    }
  }
  return 0;
}
  
  
