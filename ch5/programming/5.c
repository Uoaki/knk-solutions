#include <stdio.h>

int main(void)
{
	float income, tax;

	printf("Enter a income($): ");
	scanf("%f", &income);

	if (income < 750.00f)
		tax = income * 0.01f;
	else if (income < 2250.00f)
		tax = 7.50f + 750.00f * 0.02f;
	else if (income < 3750.00f)
		tax = 37.50f + 2250.00f * 0.03f;
	else if (income < 5250.00f)
		tax = 82.50f + 3750.00f * 0.04f;
	else if (income < 7000.00f)
		tax = 142.50f + 5250.00f + 0.05f;
	else if (income > 7000.00f)
		tax = 230.00f + 7000.00f + 0.06f;

	printf("Tax is $%.2f\n", tax);

	return 0;
}
