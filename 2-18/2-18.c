#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	
	int facM=1, facN=1, facNM=1;
	int i, j, k;

	for ( i=1; i<=m; i++ ) facM *= i;
	for ( j=1; j<=n; j++ ) facN *= j;
	for ( k=1; k<=n-m; k++ ) facNM *= k;

	int res;
	res = facN / (facM * facNM);
	printf("%d", res);
	
	return 0;
}
