/*WAP to store details of an employee, including name, id,department and salary.(task:input details
of one employee and display them)*/
#include<stdio.h>
struct employee{
	char name[50];
	int id;
	char dep[10];
	int salary;
}emp;
int main()
{
	printf("enter the name of employee:");
	scanf("%s",&emp.name);
	printf("enter the id of employee:");
	scanf("%d",&emp.id);
	printf("enter the department of employee:");
	scanf("%s",&emp.dep);
	printf("enter the salary of employee:");
	scanf("%d",&emp.salary);
	printf("name %s",emp.name);
	printf("id %d",emp.id);
	printf("department %s",emp.dep);
	printf("salary %d",emp.salary);
	return 0;
}
