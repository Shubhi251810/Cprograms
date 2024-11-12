//WAP to print the table using recursion function.
#include<stdio.h>
int table(int n,int i)
{
	if(i>=11)
	{
		return 1;
	}
	else
	{
		printf("%d\n",n*i);
		return table(n,i+1);
	}
}
int main()
{
	int n,i=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	table(n,i);
	//printf("%d * %d",n,i);
	return 0;
}
