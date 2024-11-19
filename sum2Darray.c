//WAP to sum of array elements.
#include<stdio.h>
int main()
{
	int arr[2][2],i,j,sum=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{   
		    printf("Enter the array:-");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		    sum=sum+arr[i][j];
		}
		printf("\n");
	}
	printf("%d",sum);
	return 0;
}
