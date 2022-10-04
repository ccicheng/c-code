#include<stdio.h>
#include<math.h>
void main()
{
	int n, k, j, i, sum;
	scanf_s("%d", &n);
	k = (int)pow(10,n-1);//(int)pow(x,y)取整型的x的y次方
	j =(int) pow(10, n)-1;
	
	for (i = k; i < j; i++)
	{
		sum = 0;
		int t = i;
		int p = n - 1;
		while (t > 0)
		{
			int d = t / (int)pow(10, p);//从左到右取数字
			sum = sum + (int)pow(d, 3);//将取到的数字立方
			t = t % (int)pow(10, p);//从左到右删除数字
			p--;

		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}

}

