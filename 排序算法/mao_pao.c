#include<stdio.h>
int main()
{
	int a[5]={4,7,3,5,2};
	int len,temp,flag;
	int i,j;
	len = sizeof(a)/sizeof(a[0]);
	for(i =0;i < len;i++)
	{
		for(j=len - 1;j > i;j--)
		{
			flag = 0;
			if(a[j-1] > a[j])
			{
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
				flag =1;
			}
		}
		if(flag == 0)
		{
			break;	
		}
	}
	for(i =0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}