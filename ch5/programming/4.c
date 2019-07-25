#include <stdio.h>

int main(void)
{
	int speed;

	printf("Enter a spped(in knots): ");
	scanf("%d", &speed);

	if (speed < 1)
		printf("Calm\n");
	else if (speed >= 1 && speed < 4)
		printf("Light air\n");
	else if (speed >= 4 && speed < 28)
		printf("Breeze\n");
	else if (speed >= 28 && speed < 48)
		printf("Gale\n");
	else if (speed >= 48 && speed <= 63)
		printf("Storm\n");
	else if (speed > 63)
		printf("Hurricane\n");

	return 0;
}
