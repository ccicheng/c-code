#include<stdio.h>

int main()
{
	//找出100000个以内的所有素数
	int m,n,num,i,c = 0;
	int a[10001];
	a[0] = 2;
	for(num=3;;num+=2)
	{
		int p = 1;
		for(i=2;i*i<=num;i++)
		{
			if(num % i == 0)
			{
				p = 0;
				break;
			}
		}
		if(p)
		{		//a[++c]
			a[++c]=num;	
		}
		if(c == 10000)break;
	}
	//找到a[m]到a[n]中的素数
	int cnt = 0;
	scanf("%d %d",&m,&n);
	for(i = m;i<=n;i++)
	{
		cnt++;
		printf("%d",a[i-1]);
		if(cnt % 10 == 0)
			printf("\n");
		else if(i<n)
			printf(" ");
	}
	
	
	return 0;
}