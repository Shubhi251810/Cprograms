#include<stdio.h>
#include<conio.h>
void main()
{
	int p,r,t,si=0;
	
	printf("enter the value of p:");
	scanf("%d",&p);
	printf("enter the value of r:");
	scanf("%d",&r);
	printf("enter the value of t:");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("the SI is :- %d",si);
	getch();
}
