// implement a function to count and print the frequency of each string in a user defne string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int arr[20],len,i,j,count;
	printf("enter the string:");
	scanf("%s",&str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		arr[i]=-1;
	}
	for(i=0;i<len;i++)
	{
		count=0;
		count++;
		arr[i]=0;
		for(j=i+1;j<len;j++)
		{
			if(str[i]==str[j])
			{
				arr[j]=0;
				count++;
			}
		}
		printf("%c is %d times \n",str[i],count);
	}
	return 0;
}
