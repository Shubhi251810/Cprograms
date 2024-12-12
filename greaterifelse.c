#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
		printf("enetr the value of b:");
	scanf("%d",&b);
		printf("enetr the value of c:");
	scanf("%d",&c);
	if(a>b &&a>c)
	{
		printf("a is greater");
	}
	else if(b>a && b>c)
	{
		printf("b is greater");
	}
	else if(c>a && c>b)
	{
		printf("c is greater");
	}
	else{
		printf("all are wrong");
	}
	getch();
}
