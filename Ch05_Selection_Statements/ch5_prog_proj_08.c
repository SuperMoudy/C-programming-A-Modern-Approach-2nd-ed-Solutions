/*
 * ch5_prog_proj_08.c
 *
 *  Created on: Nov 22, 2019
 *      Author: SuperMoudy
 */

// Programming Project 8: Daily Flights

#include <stdio.h>
#include <math.h>

int main(void)
{
	int desired_time, best_time_index = -1, time_range;
	int hh_desired, mm_desired, hh_dep, mm_dep, hh_arrive, mm_arrive;
	char dep_meridiem, arrive_meridiem;

	// Computing time in terms of total minutes starting from 00:00
	int dep_time[8] =
	{
			480,  // 08:00 a.m.
			583,  // 09:43 a.m.
			679,  // 11:19 a.m.
			767,  // 12:47 p.m.
			840,  // 02:00 p.m.
			945,  // 03:45 p.m.
			1140, // 07:00 p.m.
			1305  // 09:45 p.m.
	};

	int arrival_time[8] =
	{
			616,  // 10:16 a.m.
			712,  // 11:52 a.m.
			811,  // 01:31 p.m.
			900,  // 03:00 p.m.
			968,  // 04:08 p.m.
			1075, // 05:55 p.m.
			1280, // 09:20 p.m.
			1438  // 11:58 p.m.
	};

	printf("Enter a 24-hour time: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d:%d", &hh_desired, &mm_desired);

	desired_time = hh_desired * 60 + mm_desired;

	for(int i = 0; i < 7; i++)
	{
		time_range = dep_time[i] + (dep_time[i + 1] - dep_time[i]) / 2;
		if(desired_time > dep_time[i] && desired_time <= time_range)
		{
			best_time_index = i;
			break;
		}
	}

	if(best_time_index == -1)
	{
		if(desired_time <= 172) // 2:52 am --> (9:45 pm < 2:52 am < 8:00 am)
		{
			best_time_index = 7;
		}
		else
		{
			best_time_index = 0;
		}
	}

	hh_dep = dep_time[best_time_index] / 60;
	mm_dep = dep_time[best_time_index] % 60;

	if(hh_dep == 0) // Midnight
	{
		hh_dep += 12;
		dep_meridiem = 'a';
	}
	else if(hh_dep >= 12)
	{
		if(hh_dep > 12)
			hh_dep -= 12;

		dep_meridiem = 'p';
	}
	else
	{
		dep_meridiem = 'a';
	}



	hh_arrive = arrival_time[best_time_index] / 60;
	mm_arrive = arrival_time[best_time_index] % 60;

	if(hh_arrive == 0) // Midnight
	{
		hh_arrive += 12;
		arrive_meridiem = 'a';
	}
	else if(hh_arrive >= 12)
	{
		if(hh_arrive > 12)
			hh_arrive -= 12;

		arrive_meridiem = 'p';
	}
	else
	{
		arrive_meridiem = 'a';
	}


	printf("Closest departure time is %d:%.2d %c.m., ", hh_dep, mm_dep, dep_meridiem);
	printf("arriving at %d:%.2d %c.m.", hh_arrive, mm_arrive, arrive_meridiem);

	return 0;
}
