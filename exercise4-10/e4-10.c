#include <stdio.h>

int main(void)
{
	int n;
	int amount = 1;
	int i;
	int preDay;
	scanf("%d", &n);
	for (i=1;i<n;i++) {
		preDay = (amount+1)*2;
		amount = preDay;
	}
	printf("%d", amount);
	return 0;
}
