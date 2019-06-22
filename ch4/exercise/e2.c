#include <stdio.h>

int main(void)
{
	int a, b, j, k;

	printf("input two numbers: ");
	scanf("%d %d", &a, &b);

	k = (-a) / b;

	j = - (a / b);

	printf("answer is %d and %d\n", k, j);

	return 0;
}
