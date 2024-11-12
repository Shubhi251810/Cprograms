#include<stdio.h>
int fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	else if(a==1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
int main()
{
	int a,result;
	printf("Enter the value of a:");
	scanf("%d",&a);
	result=fact(a);
	printf("%d",result);
	return 0;
}

