#include <stdio.h>
void merge(int a[],int n,int start,int mid,int end)
{
	int i=start;
	int j=mid+1;
	int b[end-start+1];
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
	while(i<=mid)b[k++]=a[i++];
	while(j<=end)b[k++]=a[j++];
	k=0;
	for(int i=start;i<=end;i++)
	{
		a[i]=b[k++];
	}
}
void mergesort(int a[],int n,int start,int end)
{
	if(start>=end)return;
	int mid=(start+end)/2;
	mergesort(a,n,start,mid);
	mergesort(a,n,mid+1,end);
	merge(a,n,start,mid,end);
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