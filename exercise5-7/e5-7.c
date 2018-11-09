#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos( double e, double x )
{
	double sum = 1.0;
	double res = 0.0;
	double divisor = 0.0;
	double dividend = 0.0;
	int i=2;
	int j;
	int sign = 1;

	do {
		dividend = 1.0;
		sign *= -1;
		divisor = pow(x, i);
		for (j=i;j>0;j--) {
			dividend *= j;
		}
		res = divisor/dividend;
		sum += sign*(divisor/dividend);
		i += 2;
	} while (res > e);
	return sum;
}
