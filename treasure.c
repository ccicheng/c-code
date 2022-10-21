#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	int n,i,x,sum=0,cnt=1;
	int j,sumA=0,m,v[6][10000]={0};
	int w[25]={0},a[6]={0}; 
for(x=2;cnt<20;x++)
	{
		int isPrime = 1;
		for (i = 2; i < x; i++)
		{
			if (x%i == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1)
		{
			w[cnt]=x;
			cnt++;
		}
	}
	scanf("%d",&n);
for(i=n,j=1;i<n+5;i++)
{
	a[j]=w[i];
	sum+=a[j];
	j++;
}
	for(i=1;i<=5;i++)
	{
		if(a[i]>sum/2)
		{
			v[5][sum / 2] = sum-a[i];
			break;
		}
		for(j=0;j<=sum/2;j++)
		{
			if(a[i]>j)
				v[i][j]=v[i-1][j];
			else
				v[i][j]=max(v[i-1][j],v[i-1][j-a[i]]+a[i]);
		} 
	}
	sumA=v[5][sum/2];
	m=sum-2*sumA;
	printf("%d",m);
	return 0;
}

