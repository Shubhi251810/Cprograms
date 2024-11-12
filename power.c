//calculate the power of a number.
#include<stdio.h>
int power(int n,int p)
{
	if(p==0)
	{
		return 1;
	}
	else
	{
		return n*power(n,(p-1));
	}
}
int main()
{
	int p,n,pow;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of p:");
	scanf("%d",&p);
	pow=power(n,p);
	printf("%d",pow);
	return 0;
}
