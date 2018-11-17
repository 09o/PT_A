#include <stdio.h>

int main(void)
{
	double mileage;
	int time, cost;
	scanf("%lf %d", &mileage, &time);
	
	if ( mileage<=3 ) cost = 10;
	else if ( mileage <= 10 ) cost = 10 + (mileage-3) * 2.0 + 0.5;
	else cost = 10 + (10-3) * 2 + ( mileage-10) * 3.0 + 0.5;
	printf("%d\n", cost+time/5*2);
	return 0;
}
