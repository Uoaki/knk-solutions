#include <stdio.h>

int main(void)
{
	int a, b, time1, time2, time3, time4, time5, time6,
		time7, time8, input_time;

	printf("Enter a 24-hour time: ");
	scanf("%d : %d", &a, &b);

 	time1 = 8 * 60 + 0;
	time2 = 9 * 60 + 43;
	time3 = 11 * 60 + 19;
	time4 = 12 * 60 + 47;
	time5 = 14 * 60 + 0;
	time6 = 15 * 60 + 45;
	time7 = 19 * 60 + 0;
	time8 = 21 * 60 + 45;
	input_time = a * 60 + b;

	if(input_time <= time1)
		printf("Closest depature time is 8:00 p.m., arriving at 10:16 a.m.\n");
	
	if (input_time > time1 && input_time <= time2)
	{
		if (input_time - time2 <= time3 - input_time)
			printf("Closest depature time is 8:00 a.m., arriving at 10:16 a.m.\n");
		else
			printf("Closest depature time is 9:43 a.m., arriving at 11:54 a.m.,\n");
	}

	if (input_time > time2 && input_time <= time3)
	{
		if (input_time - time2 <= time3 - input_time)
			printf("Closest depature time is 9:43 a.m., arriving at 11:54 a.m.,\n");
		else
			printf("Closest depature time is 11:19 a.m., arriving at 1:31 p.m.n\n");
	}

	if (input_time > time3 && input_time <= time4)
	{
		if (input_time - time3 <= time4 - input_time)
			printf("Closest depature time is 11:19 a.m., arriving at 1:31 p.m.,\n");
		else
			printf("Closest depature time is 12:47 a.m., arriving at 3:00 p.m.,\n");
	}

	if (input_time > time4 && input_time <= time5)
	{
		if (input_time - time4 <= time5 - input_time)
			printf("Closest depature time is 12:47 a.m., arriving at 3:00 p.m.,\n");
		else
			printf("Closest depature time is 2:00 p.m., arriving at 4:08 p.m.,\n");
	}

	if (input_time > time5 && input_time <= time6)
	{
		if (input_time - time4 <= time5 - input_time)
			printf("Closest depature time is 2:00 p.m., arriving at 4:08 p.m.,\n");
		else
			printf("Closest depature time is 3:45 p.m., arriving at 5:55 p.m.,\n");
	}

	if (input_time > time6 && input_time <= time7)
	{
		if (input_time - time6 <= time7 - input_time)
			printf("Closest depature time is 3:45 p.m., arriving at 5:55 p.m.,\n");
		else
			printf("Closest depature time is 7:00 p.m., arriving at 9:20 p.m.,\n");
	}

	if (input_time > time7 && input_time <= time8)
	{
		if (input_time - time7 <= time8 - input_time)
			printf("Closest depature time is 7:00 p.m., arriving at 9:20 p.m.,\n");
		else
			printf("Closest depature time is 9:45 p.m., arriving at 11:58 p.m.,\n");
	}

	if (input_time > time8)
		printf("Closest depature time is 9:45 p.m., arriving at 11:58 p.m.,\n");

	return 0;
}
