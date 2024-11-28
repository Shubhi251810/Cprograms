//you are given array  of 0 amd 1 in random order segregate 0 on left side and 1 on right  side traverse array only once.
#include<stdio.h>
void segregate(int arr[],int size)
{
	
      int count=0,i;
    for(i = 0;i < size; i++)
	{
		if(arr[i]==0)
		{
			count++;
	    } 
	}
	for(i=0;i<size;i++)
	{
		if(i<count)
		{
			arr[i]=0;
		}
		else
		{
			arr[i]=1;
		}
	}
}
void aftersegregate(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[]={1,0,1,1,0,0};
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	printf("real value of array:");
	aftersegregate(arr,size);
	segregate(arr,size);
	printf("after segregate:");
	aftersegregate(arr,size);
	return 0;
}

	

