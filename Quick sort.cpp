#include <stdio.h>
int partition(int a[],int key,int start,int end) // to return the pivot index after arranging 
{
	int s=start;
	int e=end;
	while(s<e)
	{
		while(a[s]<=key)
		{
			s++;
		}
		while(a[e]>key)
		{
			e--;
		}
		if(s<e)
		{
			int temp=a[s];
			a[s]=a[e];
			a[e]=temp;
		}
	}
	int temp=a[e];
	a[e]=key;
	a[start]=temp;
	return e;
}
void quicksort(int a[],int n,int start,int end)
{
	if(start<end)
	{
		int p=a[start]; // setting first element as pivot
		p=partition(a,p,start,end); // stores the pivot index
		quicksort(a,n,start,p-1); // sorts the array before pivot index
		quicksort(a,n,p+1,end); // sorts the array after pivot index
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,n,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
