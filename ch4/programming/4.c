#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a number betwwen 0 and 32767: ");
	scanf("%d", &num);

	printf("In octal, your number is: %d%d%d%d%d\n", num/4096, (num%4096)/512, ((num%4096)%512)/64, 
			(((num%4096)%512)%64)/8, ((((num%4096)%512)%64)%8)/1);

	return 0;
}



