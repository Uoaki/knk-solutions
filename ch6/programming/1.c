#include <stdio.h>

int main (void)
{
	double i, max = 0;

	for (; ;) {
		printf("Enter a number: ");
		scanf("%lf", &i);
		
		if (i <= 0)
			break;
		else
			if (max < i)
				max = i;
	}

	printf("%.2lf\n", max);

	
	return 0;
}
