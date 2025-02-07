#include<stdio.h>
int main(){
  int i,j,row,column;
  printf("\n enter the number of rows");
  scanf("%d",&row);
  printf("\n enter the number of column");
  scanf("%d",&column);
  int matrix[row][column];
  printf("enter the elements");
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
  return 0;
}
