#include <stdio.h>

int main(void)
{
	int n,dividend,i,j;
	double constant=1.0;
	scanf("%d", &n);
	for ( i=1; i<=n; i++ ) {
		dividend = 1;
		for ( j=1; j<=i; j++ )
			dividend *= j;
		constant += 1.0/dividend;
	}
	printf("%.8f", constant);
	return 0;
}
