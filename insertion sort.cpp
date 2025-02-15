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
	for(int i=1;i<n;i++)
	{
		int temp=arr[i]; // stores the value of arr[i]
		int j=i-1;
		while(j>=0 && arr[j]>temp) // shift the element to the right if they are greater
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp; // if its not greater then store the temp in that position
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
