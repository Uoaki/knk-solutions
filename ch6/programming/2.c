#include <stdio.h>

int main (void)
{
	int n, m, remainder;

	printf("Enter two numbers(a<b): ");
	scanf("%d %d", &n, &m);
	
		while (n != 0) {
			remainder = m % n;
			m = n;
			n = remainder;
		}
	
	printf("Greatest Common Divisor: %d\n", m);

	return 0;
}
