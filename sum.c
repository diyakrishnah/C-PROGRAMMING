#include<stdio.h>
int sum(int array[],int limit);
int main(){
  int limit;
  printf("Enter the limit of the array:");
  scanf("%d",&limit);
  int array[limit];
  sum(array,limit);
  return 0;
  }
  int sum(int array[],int limit){
  int arraysum=0;
  int i;
  printf("Enter the elements:");
  for (i=0;i<limit;i++){
  scanf("%d",&array[i]);
  arraysum+=array[i];
  }
  printf("%d is the sum of the elements",arraysum);
  return arraysum;
  }
