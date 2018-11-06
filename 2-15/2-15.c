#include <stdio.h>

int main()
{
	int n;
	double sum;
	int i;
	double d = -1.0;
	
	scanf("%d", &n);
	
	for ( i=1; i<=n; i+=3 ) {
		d *= -1;
		sum += d/i;
	}
	
	printf("sum = %.3f", sum);
	return 0;
}
