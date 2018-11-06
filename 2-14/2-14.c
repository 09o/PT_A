#include <stdio.h>

int main()
{
	int n;
	double sum;
	int i;
	
	scanf("%d", &n);
	for ( i=1; i<=n; i+=2 ) {
		sum += 1.0/i;
	}	
	printf("sum = %.6f", sum);
	return 0;
}
