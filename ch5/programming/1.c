#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (n >= 0 && n < 10)
		printf("The number %d has 1 digit\n", n);
	else if (n >= 11 && n < 100)
		printf("The number %d has 2 digits\n", n);
	else if (n >= 100 && n < 1000)
		printf("The number %d has 3 digits\n", n);
	else
		printf("Please input a positive number or from 1 to 3 digits number.\n");

	return 0;
}
