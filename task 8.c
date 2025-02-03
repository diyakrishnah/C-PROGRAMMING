#include<stdio.h>
int main(){
    char grade;
    printf("Enter your grade (in capital letter) :");
    scanf("%c",&grade);
    switch (grade){
    case'E':
        printf("Excellent!!");
        break;
     case'V':
        printf("very good!!");
        break;
     case'G':
        printf("Good!!");
        break;
     case'A':
        printf("Average!!");
        break;
     case'F':
        printf("Fail!!");
        break;
     default:
        printf("Invalid grade.");
        break;
    }
    return 0;
}
