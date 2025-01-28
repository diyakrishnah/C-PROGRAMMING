//check whether a triangle is equilateral,isoscelesor scalene
#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("\n Enter the 3 sides of a triangle:");
    scanf("%d %d %d",&side1,&side2,&side3);
    if (side1==side2&&side2==side3){
            printf("It is an Equilateral triangle!");
    }
    else if(side1==side2||side2==side3||side3==side1){
            printf("It is an Isosceles triangle!");
    }
    else{
            printf("It is a scalene triangle!");
    }
    return 0;
}
