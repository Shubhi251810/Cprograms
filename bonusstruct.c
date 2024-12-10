/*A company wants to calculate the annual bonus for its employee. the bonus is 10% of the employee
salaty if they have worked for more than 5 years.*/

#include<stdio.h>
struct employee
{
	int id;
	char name[30];
	int salary,year;
}emp[10];
int main()
{
int i,n;
printf("enter the number of years:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the id of employee:  ");
    scanf("%d",&emp[i].id);
    printf("enter the name of employee:  ");
	scanf("%s",&emp[i].name);
	printf("enter the salary of employee:  ");
	scanf("%d",&emp[i].salary);
	printf("enter the working year of employee:  ");
	scanf("%d",&emp[i].year);
}
for(i=0;i<n;i++)
{
	if(emp[i].salary<5)
	{
		emp[i].salary=emp[i].salary+0.1*emp[i].salary;
		printf("%d \n",emp[i].salary);
	}
	printf("%d \n",emp[i].id);
	printf("%s \n",emp[i].name);
	printf("%d \n",emp[i].salary);
	printf("%d\n",emp[i].year);
}
return 0;
}

