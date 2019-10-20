#include <stdio.h>

int main(void)
{
	int month, day, year, earliest_month, earliest_day, earliest_year;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &earliest_month, &earliest_day, &earliest_year);

	while (month && day && year != 0) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%2d/%2d/%2d", &month, &day, &year);

		if (year == 0)
			continue;
		
		if (earliest_year == year) {
			if (earliest_month == month) {
				if (earliest_day > day) {
					earliest_month = month; earliest_day = day; earliest_year = year;
				}
			}
			else if (earliest_month > month) {
				earliest_month = month; earliest_day = day; earliest_year = year;
			}
		}
		else if (earliest_year > year) {
			earliest_month = month; earliest_day = day; earliest_year = year;
		}
				
	}
	
	printf("%2.2d/%2.2d/%2.2d is earliest day\n", earliest_month, earliest_day, earliest_year);

	return 0;
}
