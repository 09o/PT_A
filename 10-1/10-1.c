#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

int sum(int n)
{
	int res;
	if (n > 0) {
		if ( n == 1)
			res = n;
		else
			res = sum(n-1) + n;
	} else res = 0;
	
	return res;
}
