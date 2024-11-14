//WAP to store even number in aray.
#include<stdio.h>
int main()
{
	int arr[20],i;
	for(i=0;i<10;i++)
	{
		printf("enter the number:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
	 if(arr[i]%2==0)
	 {
	 	printf("%d",arr[i]);
	 	continue;
	 }
	}
	return 0;
}
