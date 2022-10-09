#include<stdio.h>
int main()
{
	int i,j,k;
	int a[5] = {4,7,3,5,2};
	int len,temp;
	len = sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
	{
		k = i;
		for(j=i;j<len;j++)
		{
			if(a[j] < a[k])
			{
				k = j;
			}
		}
		if(k != i)
		{
			temp = a[k];
			a[k] = a[i];
			a[i] = temp;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
	
	return 0;
}