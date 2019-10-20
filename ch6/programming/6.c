#include <stdio.h>

int main (void)
{
	int number, pow, even = 2;

	printf("Enter a number: ");
	scanf("%d", &number);

	for (; ;) {
		pow = even * even;
		if (pow <= number) {
			printf("%d\n", pow);
			even += 2;
		}
		else
			break;
	}

	return 0;
}
