//WAP to check the same values address and count.
#include<stdio.h>
int main()
{
	int arr[3],n,i,count=0;
	for(i=0;i<=3;i++)
	{
		printf("enter the array:");
		scanf("%d",&arr[i]);
	}
	printf("enter the element:");
	scanf("%d",&n);
	for(i=0;i<=3;i++)
	{
		if(arr[i]==n)
		{
			printf("element %d \n location %d \n",n,i);
			count++;
		}
	}
	printf("count %d",count);
	return 0;
}
