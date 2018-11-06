#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int i;
	int res;
	scanf("%d", &n);
	
	for ( i=0; i<=n; i++ ) {
		res = pow(n,i);
		printf("pow(%d,%d) = %d", n, i, res);
		if ( i < n ) printf("\n");
	}
}
