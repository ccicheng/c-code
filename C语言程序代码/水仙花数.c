#include<stdio.h>
#include<math.h>
void main()
{
	int n, k, j, i, sum;
	scanf_s("%d", &n);
	k = (int)pow(10,n-1);//(int)pow(x,y)ȡ���͵�x��y�η�
	j =(int) pow(10, n)-1;
	
	for (i = k; i < j; i++)
	{
		sum = 0;
		int t = i;
		int p = n - 1;
		while (t > 0)
		{
			int d = t / (int)pow(10, p);//������ȡ����
			sum = sum + (int)pow(d, 3);//��ȡ������������
			t = t % (int)pow(10, p);//������ɾ������
			p--;

		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}

}

