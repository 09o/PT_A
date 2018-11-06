#include <stdio.h>

int main()
{
	int a,b,c,d;
	int sum;
	double average;
	
	scanf("%d %d %d %d",&a, &b, &c, &d);
	
	sum = a + b + c + d;
	average = (a + b + c + d) / 4.0;
	printf("sum = %d; Average = %.1f", sum, average);
	return 0;
}
