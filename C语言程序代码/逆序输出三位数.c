#include<stdio.h>
int main()
{
	int x, y, z,number;	//xΪ��λ��yΪʮλ��zΪ��λ
	scanf_s("%d", &number);
		x = number / 100;
		y = number / 10 % 10;
		z = number % 100;
		int reverse_number;
		reverse_number = z * 100 + y * 10 + x;
		printf("%d", reverse_number);
			return 0;
}