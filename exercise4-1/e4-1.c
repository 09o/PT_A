#include <stdio.h>

int main(void)
{
	int n,sum;
	do {
		scanf("%d", &n);
		if (n > 0 && n % 2 != 0 ) {
			sum += n;
		}
	} while (n > 0);
	printf("%d", sum);
	return 0;
}
