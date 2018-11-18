#include <stdio.h>
#include <math.h>

int main(void)
{
	double number, item;
	double sum = 1.0;
	int i, dividend;
	int cnt = 0;
	scanf("%lf", &number);  // 一定要记得这个&！！！！！！！！ 
	do {
		int dividend = 1;
		cnt++;
		for (i=1;i<=cnt;i++) dividend *= i;
		item = 1.0*pow(number, cnt)/dividend;
		sum += item;
	} while ( item > 0.00001);
	printf("%.4f", sum);
	return 0;
}
