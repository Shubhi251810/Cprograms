#include<stdio.h>
int main()
{
	int arr[2][2],i,j,a[2][2];
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
		 a[j][i]=arr[i][j];
			
		}
		
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
