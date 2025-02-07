#include<stdio.h>
int main(){
  int i,j,row,column;
  printf("\nEnter the number of rows :");
  scanf("%d",&row);
  printf("\nEnter the number of column :");
  scanf("%d",&column);
  int matrix[row][column];
  printf("\nEnter the elements :");
  for (i=0;i<row;i++){
    for (j=0;j<column;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for (i=0;i<row;i++){
    for (j=0;j<column;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  int sum=0;
  for (i=0;i<row;i++){
    for(j=0;j<column;j++){
      if (i==j){
        sum=sum+matrix[i][j];
      }
    }
  }
  printf("\n The sum of diagonal elements are ");
  printf("%d",sum);
  return 0;
}
