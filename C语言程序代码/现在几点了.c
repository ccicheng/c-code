#include<stdio.h>

int main()
{
	int start_time, past_time, end_time;	//���忪ʼʱ�䣬����ʱ�䣬����ʱ��
	int hour_1 = 0,hour_2, minute_1,minute_2;	//����Сʱʮλ������λ������ʼ����λ�ϵ����������ܷ�����
	scanf_s("%d %d", &start_time, &past_time);	//���뿪ʼʱ�䣬����ʱ��
	if (start_time >= 1000)									//��Сʱ�Ƿ���ʮλ���������
	{
		hour_1 = start_time / 1000;
		hour_2 =  start_time / 100 % 10;
		minute_1 = start_time%100;
	}
	else
	{
		hour_2 = start_time / 100;
		minute_1 = start_time % 100;
	}

	minute_2 = past_time + (hour_1 * 10 + hour_2) * 60 + minute_1;
	end_time = minute_2 / 60 * 100 + (minute_2 - minute_2 / 60 * 60);
	printf("%d",end_time);
	return 0;
}