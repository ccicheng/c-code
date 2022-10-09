#include<stdio.h>
void sort(int a[],int start,int mid,int end)
{
	int b[5] ={0};
	int i,j,k;
	i = start;
	j = mid+1;
	k = 0;
	while(i <= mid && j <=end)
	{
		if(a[i]<a[j])
		{
			b[k++] = a[i++];
		}
		else
		{
			b[k++] = a[j++];
		}
	}
	
	if(i == mid+1)
	{
		while(j<=end)
		{
			b[k++] = a[j++];
		}
	}
	if(j == end+1)
	{
		while(i<=mid)
		{
			b[k++] = a[i++];
		}
	}
	for(i=start,j=0;j<k;i++,j++)
	{
		a[i] = b[j];
	}
	
}



void merge(int a[],int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int mid =(start+end)/2;
	merge(a,start,mid);
	merge(a,mid+1,end);
	sort(a,start,mid,end);
}

int main()
{
	int a[5] = {4,7,3,5,2};
	int i,len;
	len = sizeof(a)/sizeof(a[0]);
	merge(a,0,4);
	for(i = 0;i<len;i++)
	{
		printf("%d",a[i]);
	}

	return 0;
}