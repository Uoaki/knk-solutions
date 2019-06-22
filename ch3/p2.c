/* product information */

#include <stdio.h>

int main(void)
{

	int i, d, m, y;
	float p;

	printf("Enter item number: ");
	scanf("%d", &i);
	printf("Enter unit price: ");
	scanf("%f", &p);
	printf("Enter purchase date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%-d		$%7.2f	%-.2d/%-.2d/%-d\n", i, p, m, d, y);

	return 0;
}
