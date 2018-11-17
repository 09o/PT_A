#include <stdio.h>

int main(void)
{
	double eps,item,sum=0.0;
	int sign=-1,dividend=1;
	scanf("%lf", &eps);
	do {
		sign *= -1;
		item = 1.0/dividend;
		sum += sign*item;
		dividend += 3;
	} while (item > eps);
	printf("sum = %.6f", sum);
	return 0;
}
