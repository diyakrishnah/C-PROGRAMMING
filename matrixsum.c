//sum of two matrix
#include<stdio.h>
int main(){
  int i,j,row,col;
  printf("\n Enter the number of rows of matrices");
  scanf("%d",&row);
  printf("\n Enter the number of column of  matrices");
  scanf("%d",&col);
  int matrix1[row][col];
  printf("Enter the elements");
  for (i=0;i<row;i++){
    for (j=0;j<col;j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
  int matrix2[i][j];
  for (i=0;i<row;i++){
    for (j=0;j<col;j++){
      scanf("%d",&matrix2[i][j]);
    }
  }
  int matrix3[i][j];
  for (i=0;i<row;i++){
    for (j=0;j<col;j++){
      matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    }
  }
  printf("The sum of the matrix is ");
  for (i=0;i<row;i++){
    for (j=0;j<col;j++){
     printf("%d\t",matrix3[i][j]);
    }
    printf("\n");
  }
  return 0;
}
  
