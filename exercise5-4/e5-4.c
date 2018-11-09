#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p )
{
	int isPrime = 1;
	int i;
	if ( p <= 1 ) isPrime = 0;
	for (i=2;i<=sqrt(p);i++){
		if (p%i ==0) {
			isPrime=0;
			break;
		} else {
			isPrime=1;
		}
	}
	return isPrime;
}

int PrimeSum( int m, int n )
{
	int sum;
	int j;
	for ( j=m;j<=n;j++ ) {
		if (prime(j) != 0 ) sum += j;
	}
	return sum;
}
