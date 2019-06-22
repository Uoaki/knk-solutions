// Calculate the remaininng balance on a loan

#include <stdio.h>

int main(void)
{
	float a, r, p, b; // a = amount of loan, r = interest rate, p = monthly payment, b = balance remaining payment
	float first_payment, second_payment, third_payment, monthly_interest_rate;

	printf("Enter amount of loan: ");
	scanf("%f", &a);
	printf("Enter interest rate: ");
	scanf("%f", &r);
	printf("Enter monthly payment: ");
	scanf("%f", &p);

	monthly_interest_rate = r / 100 / 12;
	first_payment = a * (1 + monthly_interest_rate) - p;
	second_payment = first_payment * (1 + monthly_interest_rate) - p;
	third_payment = second_payment * (1 + monthly_interest_rate) - p;

	printf("Balance remaining after first payment: $%.2f\n", first_payment);
	printf("Balance remaining after second payment: $%.2f\n", second_payment);
	printf("Balance remaining after third payment: $%.2f\n", third_payment);

	return 0;
}
