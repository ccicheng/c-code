#include<stdio.h>
void sort(int a[],int start,int end)
{
	int k = a[start];
	int i = start;
	int j = end;
	if(start >= end)
	{
		return;
	}
	while(start < end)
	{
		while(start < end && k <= a[end])
		{
			--end;
		}
		if(k > a[end])
		{
			a[start] = a[end];
			++start;
		}
		while(start < end && k >= a[start])
		{
			++start;
		}
		if(k < a[start])
		{
			a[end] = a[start];
			--end;
		}
	}
		a[start] = k;
		sort(a,i,start-1);
		sort(a,start+1,j);
}

int main(void)
{
	int len,i;
	int a[5] = {4,7,3,5,2};
	len = sizeof(a)/sizeof(a[0]);
	sort(a,0,4);
	for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}