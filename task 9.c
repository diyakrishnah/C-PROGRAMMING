#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("Enter the length of the rectangle:");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle:");
    scanf("%d",&breadth);
    perimeter=2*(length+breadth);
    area=length*breadth;
    if (area>perimeter){
        printf("Area %d unit is greather than it's perimeter %d unit ",area,perimeter);
    }else{
        printf("perimeter %d unit is greater than area %d unit ",perimeter,area);
     }
     return 0;
}
