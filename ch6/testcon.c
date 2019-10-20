/* test program about continue statement */

#include <stdio.h>

int main(void)
{
	int i, n, sum;
	n = 0;
	sum = 0;


	while (n < 10) {
		printf("Enter the number: ");
		scanf("%d", &i);
		if (i == 0)
			continue;
		sum += i;
		n++;
	}
	
	printf("sum is %d\n", sum);

	return 0;
}
