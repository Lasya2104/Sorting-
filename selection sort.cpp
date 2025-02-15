#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		int min=i; // stores the index of i
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min]) // if it is less, it stores its index and not the value and checks for the least value through the array
			{
				min=j;
			}
		}
		int temp=arr[i]; // after finding the least value it swaps
		arr[i]=arr[min];
		arr[min]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
