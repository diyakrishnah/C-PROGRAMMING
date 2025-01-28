//percentage of marks
#include<stdio.h>
int main(){
    int mark1,mark2,mark3,sum,percentage;
    printf("\n Enter the marks of your maths,physics,chemistry out of 100:");
    scanf("%d %d %d",&mark1,&mark2,&mark3);
    sum=(mark1 + mark2 + mark3);
    percentage=(sum/3);
    if (percentage>=75){
            printf("You got First class with Distinction!");
    }
    else if (percentage>=60&&percentage<75){
            printf("You got a First class!");
    }
    else{
            printf("You got Second class!");
    }
    return 0;
}
