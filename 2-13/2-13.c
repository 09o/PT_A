#include <stdio.h>

int main()
{
	int n;
	double sum;
	int i;
	
	scanf("%d", &n);
	for ( i=1; i<=n; i++ ) {
		sum += 1.0/i;
	}
	
	printf("sum = %f", sum);
	return 0;
}
