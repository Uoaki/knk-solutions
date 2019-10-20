/* exercises 2 */

#include <stdio.h>

int main(void)
{
	int i, n = 0;

	for (i = 9384; i > 0; n++) {
		printf("%d\n", i);
		i /= 10;
	} 

	return 0;
}
