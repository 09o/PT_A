#include <stdio.h>

int main(void)
{
	int n, t, i;
	double sum = 0.0;
	int divisor = 2, dividend = 1;
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		sum += 1.0*divisor/dividend;
		t = divisor;
		divisor += dividend;
		dividend = t;
	}
	printf("%.2f", sum);
	return 0;
}
