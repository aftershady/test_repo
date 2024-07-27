#include "main.h"
#include <unistd.h>

int main(void)
{
	int i, j;
	time_unit clock = {'0','3','0','0'};

	for (i = 0; clock.ten_hour != '2' || clock.hour != '4'; i++)
	{
		for(j = 0; clock.minutes <= '9'; j++)
		{
			display_time(&clock.ten_hour, &clock.hour, &clock.ten_minutes,
			&clock.minutes);
			clock.minutes++;
			sleep (1);
		}
		clock.minutes = '0';
		clock.ten_minutes++;

		if(clock.ten_minutes == '6')
		{
			clock.hour++;
			clock.ten_minutes = '0';
		}

		if(clock.hour > '9')
		{
			clock.ten_hour++;
			clock.hour = '0';
		}

	}



}
