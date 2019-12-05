#include <stdio.h>

int main(void)
{
	int num, i;
	char ch;

	printf("This Program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &num);
	ch = getchar();

	for (i = 1; i <= num; i++) {
		printf("%10d%10d\n", i, i * i);
		
		if (i == 24) {
			printf("Press Enter to continue...");
			ch = getchar();
			}
	}

	return 0;
}
