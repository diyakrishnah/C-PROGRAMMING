/*AUTHOR:Diya krishna
Date:2/4/25*/
#include<stdio.h>
typedef struct{
int rollnumber;
char name[20];
float cgpa;
}student;
int main(){
int limit;
printf("Enter the limit:");
scanf("%d",&limit);
student s[limit];
for(int i=0;i<limit;i++){
printf("\n Enter the roll number:");
scanf("%d",&s[i].rollnumber);
printf("\n Enter the name:");
scanf("%s",s[i].name);
printf("\n Enter the CGPA:");
scanf("%f",&s[i].cgpa);
}
printf("\n The student details");
for(int i=0;i<limit;i++){
printf("\n Name:\t%s",s[i].name);
printf("\n Roll no:\t%d",s[i].rollnumber);
printf("\n CGPA:\t%f",s[i].cgpa);
}
}

