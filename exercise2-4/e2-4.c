#include <stdio.h>

int main()
{
	int n, i;
	int numerator;
	double denominator;
	int t = -1;
	double sum = 0.0;
	
	scanf("%d", &n);
	
	for ( i=1; i<=n; i++ ) {
		t *= -1.0;
		numerator = i;
		denominator = numerator + (numerator - 1.0);
		sum += t*(numerator/denominator);
	}
	
	printf("%.3f", sum);
	return 0;
}
