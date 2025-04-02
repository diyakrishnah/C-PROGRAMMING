/*AUTHOR:Diya krishna
Date:2/4/25
program to calculate the total and average marks of a group of students using an array of structures. Include student name, roll number, and marks in three subjects.*/
#include<stdio.h>
typedef struct{
char name[20];
int m1;
int m2;
int m3;
int rollnumber;
}student;
int main(){
int limit,total,avg;
printf("Enter the limit:");
scanf("%d",&limit);
student s[limit];
for(int i=0;i<limit;i++){
printf("\n Enter the roll number:");
scanf("%d",&s[i].rollnumber);
printf("\n Enter the name:");
scanf("%s",s[i].name);
printf("\n Enter the marks of physics,chemistry,maths subjects respectively :");
scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
}
for(int i=0;i<limit;i++){
total+=s[i].m1+s[i].m2+s[i].m3;
printf("\n Name:\t%s",s[i].name);
printf("\n Roll no:\t%d",s[i].rollnumber);
}
avg=total/limit;
printf("\nthe total number of students are %d\n",total);
printf("The average of the marks are %d",avg);
return 0;
}
