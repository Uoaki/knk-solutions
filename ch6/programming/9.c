// Calculate the remaininng balance on a loan

#include <stdio.h>

int main(void)
{
	float a, r, p; // a = amount of loan, r = interest rate, p = monthly payment
	float payment, monthly_interest_rate;
	int i, n;

	printf("Enter amount of loan: ");
	scanf("%f", &a);
	printf("Enter interest rate: ");
	scanf("%f", &r);
	printf("Enter monthly payment: ");
	scanf("%f", &p);
	printf("Enter a number: ");
	scanf("%d", &n);

	monthly_interest_rate = r / 100 / 12;
	payment = a * (1 + monthly_interest_rate) - p;
	printf("Balance remaining after payment: $%.2f\n", payment);                                                                         	
	
	for (i = 1; i <= n - 1; i++) {
		payment = payment * (1 + monthly_interest_rate) - p;
		printf("Balance remaining after payment: $%.2f\n", payment); 		
	}
	return 0;
}
