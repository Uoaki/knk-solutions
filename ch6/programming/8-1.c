#include <stdio.h>

int main ()
{
	int totalDays, startDay, i;

	printf("총 일 수 입력: ");
	scanf("%d", &totalDays);

	printf("시작 요일 입력: ");
	scanf("%d", &startDay);

	for (i = 0; i < startDay - 1; i++)
		printf("   ");
	
	for (i = 0; i < totalDays; i++) {
		printf("%3d", i + 1);

		startDay++;
		if (startDay > 7) {
			printf("\n");
			startDay = 1;
		}
	}

	printf("\n");
	
	return 0;
}
