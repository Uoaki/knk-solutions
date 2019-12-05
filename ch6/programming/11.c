/* The program that calculates approximation of e */

#include <stdio.h>

int main (void)
{
	int i, n, j = 1;
	float e = 1.0f;

	printf("Enter a value: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) 
		e += 1.0f / (j *= i);	// j *= i means n!

	printf("Approximation of e: %f\n", e);

	return 0;
}
