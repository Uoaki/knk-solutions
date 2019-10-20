//reversal number

#include <stdio.h>

int main (void)
{
	int num;

	do {	
		printf("Enter a two-digit number: ");
		scanf("%d", &num);

		printf("The reversal is: %d%d\n", num % 10, num / 10); 		
	} while (num % 10 != 0);

	return 0;
}
