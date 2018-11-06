#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	double res;
	scanf("%lf", &x);
	printf("%.2f\n", x);
	
	if ( x >= 0 ) {
		res = pow(x, 0.5);
	} else {
		res = pow(x+1, 2) + 2*x + 1/x;
	}
	
	printf("f(%.2f) = %.2f",x,  res);
	return 0;
}
