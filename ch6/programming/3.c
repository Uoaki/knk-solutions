#include <stdio.h>

int main (void)
{
	int n, m, a, b, temp;

	printf("Enter a fraction: ");
	scanf("%d / %d", &a, &b);

	n = a, m = b;

	if (b == 0) {
		printf("error!\n");
		return 0;
	}

	while (n != 0) {
		temp = m % n;
		m = n;
		n = temp;
	}

	printf("In lowest terms: %d / %d\n", a/m, b/m);

	return 0;
}
