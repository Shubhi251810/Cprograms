#include<stdio.h>
int main()
{
int arr[5],i;
for(i=0;i<4;i++)
{
	printf("enter the array:");
	scanf("%d",&arr[i]);
}
for(i=0;i<4;i++)
{
	printf("%d",arr[i]);
}
return 0;
}