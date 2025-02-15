#include <stdio.h>
void merge(int a[],int n,int start,int mid,int end)
{
	int i=start; 
	int j=mid+1;
	int b[end-start+1]; // this stores the sorted values
	int k=0;
	while(i<=mid && j<=end)
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i++];
		}
		else
		{
			b[k++]=a[j++];
		}
	}
	while(i<=mid)b[k++]=a[i++]; // if single element remains it automatically stores
	while(j<=end)b[k++]=a[j++];
	k=0;
	for(int i=start;i<=end;i++) // storing the sorted values to the original array
	{
		a[i]=b[k++];
	}
}
void mergesort(int a[],int n,int start,int end)
{
	if(start>=end)return;
	int mid=(start+end)/2;
	mergesort(a,n,start,mid); // it sorts the first half of the array
	mergesort(a,n,mid+1,end); // it sorts the second half of the array
	merge(a,n,start,mid,end); // it merges the two sorted arrays
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
	mergesort(a,n,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
