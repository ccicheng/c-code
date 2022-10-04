#include<stdio.h>

int main()
{
	int start_time, past_time, end_time;
	int hour, minute_1, minute_2;
	scanf("%d %d", &start_time, &past_time);	

		hour = start_time / 100;
		minute_1 = start_time % 100;


	minute_2 = past_time + hour * 60 + minute_1;
	end_time = minute_2 / 60 * 100 + (minute_2 - minute_2 / 60 * 60);
	printf("%d", end_time);
	return 0;
}