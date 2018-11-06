#include <stdio.h>

int main()
{
	double x;
	int res = 0;
	scanf("%lf", &x);
	
	if ( x != 0 ) {
		printf("f(%.1f) = %.1f", x, 1/x);
	} else {
		printf("f(%.1f) = %.1f", x, res);
	}
	return 0;
}
