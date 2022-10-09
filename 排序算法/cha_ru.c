#include<stdio.h>
int main()
{
	int i,j,x;
	int a[5] = {4,7,3,5,2};
	int len;
	len =sizeof(a)/sizeof(a[0]);
	for(i=1;i<len;i++)
	{
		if(a[i]<a[i-1])
		{
			j = i-1;//记录已经排好序的数字末尾下标
			x = a[i];
			while(j>=0 && x<a[j])//与已排好的序列数字从右往左一一比较，同时数组后移腾出位置
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=x;//插入
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}