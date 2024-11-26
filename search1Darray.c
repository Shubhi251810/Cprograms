//write a program to search an element in 1D array.
#include<stdio.h>
int main()
{
	int arr[3],n,i;
	for(i=0;i<=3;i++)
	{
		printf("enter an array:");
		scanf("%d",&arr[i]);
	}
	printf("enter a element:");
	scanf("%d",&n);
	for(i=0;i<=3;i++)
	{
	while(arr[i]==n)
	{
		printf("%d",n);
		break;
	}
}
	return 0;
}
