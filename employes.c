/*AUTHOR:Diya krishna
Date:2/4/25
program to define a structure for storing employee details (name, ID, and salary). Input the details for n employees and display them.*/
#include<stdio.h>
typedef struct{
char id[20];
char name[20];
int salary;
}employ;
int main(){
int limit;
printf("Enter the number of employees:");
scanf("%d",&limit);
employ e[limit];
for(int i=0;i<limit;i++){
printf("\n Enter the ID:");
scanf("%s",e[i].id);
printf("\n Enter the name:");
scanf("%s",e[i].name);
printf("\n Enter the salary:");
scanf("%d",&e[i].salary);
}
printf("\n The Employees details");
for(int i=0;i<limit;i++){
printf("\n Name:\t%s",e[i].name);
printf("\n ID:\t%s",e[i].id);
printf("\n Salary:\t%d",e[i].salary);
}
return 0;
}

