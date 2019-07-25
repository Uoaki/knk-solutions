#include <stdio.h>

int main(void)
{
	int i1, i2;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &i1, &i2);

	if (i1 >= 0 && i1 < 13)
		printf("Equivalent 12-hour time: %2.2d:%2.2d AM\n", i1, i2);
	else if (i1 >= 13 && i1 < 24)
		printf("Equivalent 12-hour time: %2.2d:%2.2d PM\n", i1-12, i2);
	else if (i1 == 24)
		printf("Equivalnet 12-hour time: %2.2d:%2.2d AM\n", i1-24, i2);
	else
		printf("Error!\n");

	return 0;
}
