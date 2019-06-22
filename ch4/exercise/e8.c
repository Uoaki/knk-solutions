#include <stdio.h>

int main(void)
{
	int total = 15;

	printf("answer1: %d\n", 9 - ((total - 1) % 10));
	printf("answer2: %d\n", (10 - (total % 10)) % 10);

	return 0;
}
