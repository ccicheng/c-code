#include<stdio.h>

int main()
{
	int start_time, past_time, end_time;	//定义开始时间，流逝时间，最终时间
	int hour_1 = 0,hour_2, minute_1,minute_2;	//定义小时十位数，个位数，开始分钟位上的数，最终总分钟数
	scanf_s("%d %d", &start_time, &past_time);	//输入开始时间，流逝时间
	if (start_time >= 1000)									//对小时是否有十位数分类进行
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