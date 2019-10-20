#include <stdio.h>

int main (void)
{
	int i, n, doy;

	printf("Enter number of days in month: ");
	scanf("%d", &n);
	
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &doy);
	
	for (i = 1; i < doy; i++)
		printf("   ");

	for (i = 1; i <= n; i++) {
		printf("%3d", i);
		
		if ((doy + i - 1) % 7 == 0)
			printf("\n");
	}
	
	printf("\n");
	return 0;
}

