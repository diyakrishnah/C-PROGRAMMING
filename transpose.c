#include<stdio.h>
int main(){
  int i,j,row,column;
  printf("\nEnter the number of rows and columns:");
  scanf("%d%d",&row,&column);
  printf("\n Enter the elements:");
  int matrix[row][column];
  for (i=0;i<row;i++){
    for(j=0;j<column;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for (i=0;i<column;i++){
    for(j=0;j<row;j++){
      printf("%d\t",matrix[j][i]);
    }
    printf("\n");
  }
  return 0;
}
