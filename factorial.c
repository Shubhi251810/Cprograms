#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n,c=1;
	printf("enter the number in n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=c*i;
	}
	printf("the factorial is :- %d",c);
	getch();
}
