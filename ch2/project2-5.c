// Display the value of the polynomial

#include <stdio.h>

int main(void)
{
	int x, y;

	printf("Enter the value: ");
	scanf("%d", &x);

	y = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6; // y = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6

	printf("Compute value: %d\n", y);

	return 0;
}
