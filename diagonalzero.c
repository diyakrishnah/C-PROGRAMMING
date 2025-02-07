#include<stdio.h>
int main(){
  int i,j,row,column;
  printf("\nEnter the number of rows and columns:");
  scanf("%d%d",&row,&column);
  printf("\nEnter the elements:");
  int matrix[row][column];
  for (i=0;i<row;i++){
    for (j=0;j<column;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for(i=0;i<row;i++){
    for(j=0;j<row;j++){
      if (i==j){
        matrix[i][j]=0;
      }
    }
  }
  for (i=0;i<row;i++){
    for(j=0;j<column;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
      
