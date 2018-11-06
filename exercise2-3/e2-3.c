#include <stdio.h>
#include <math.h>

int main()
{
	int m, n;
	int i, j;
	
	scanf("%d %d", &m, &n);
	
	int square=0;
	double rec=0.0;
	
	for ( i=0; m+i<=n; i++ ) {
		square += pow(m+i,2);
		rec += 1.0/(m+i);
	}
	
	printf("sum = %.6f", square+rec);
	return 0;
}
