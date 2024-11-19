//WAP to insert the element in 2D array. 
#include<stdio.h>
int main()
{
	int arr[2][3],i,j;
	/*for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the array");
			scanf("%d",&arr[i][j]);
		}
	}*/
	printf("insert the element");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
