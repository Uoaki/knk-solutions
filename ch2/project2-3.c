// Modified the project2-2

#include <stdio.h>

int main(void)

{
	int r;

	printf("Enter a radius: ");
	scanf("%d", &r);

	printf("The volume of a sphere: %f\n", 4.0f/3.0f * 3.141592 * r * r * r);

	return 0;
}
