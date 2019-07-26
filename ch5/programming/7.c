#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, a1, a2, b1, b2, largest, smallest;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if (n1 > n2) {
		a1 = n1;
		a2 = n2;
	}
	else {
		a2 = n1;
		a1 = n2;
	}

	if (n3 > n4) {
		b1 = n3;
		b2 = n4;
	}
	else {
		b2 = n3;
		b1 = n4;
	}

	if (a1 > b1) 
		largest = a1;
	else
		largest = b1;

	if (a2 > b2)
		smallest = b2;
	else
		smallest = a2;

	printf("Largest: %d\n", largest);
	printf("Smallest %d\n", smallest);

	return 0;
}
