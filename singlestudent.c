//WAP to store and display the details of a single student.
#include<stdio.h>
	struct student{
		char name[10];
		int rollno;
		float marks;
	}stud;
	int main()
	{
	printf("Enter the name:");
	scanf("%s",stud.name);
	printf("Enter the roll number:");
	scanf("%d",stud.rollno);
	printf("Enter the total marks:");
	scanf("%f",stud.marks);
	printf("Name :- %s",stud.name);
	printf("Roll number :- %d",stud.rollno);
	printf("Total marks :- %f",stud.marks);
	return 0;
}
