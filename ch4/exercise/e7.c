#include <stdio.h>

int main(void)
{
	int total1 = 10;
	int total2 = 10; 


	total1 - 1;
	(total1 - 1) % 10;
	((total1 - 1) % 10) - 9;

	printf("%d\n", ((total1 - 1) % 10) - 9);

	total2 % 10;
	(total2 % 10) - 10;

	printf("%d\n", (total2 % 10) - 10);

	return 0;
}
