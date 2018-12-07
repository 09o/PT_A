#include <stdio.h>

int main()
{
	int year, month, day;
	int daysPerMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d/%d/%d", &year, &month, &day);
	
	if ((year%4==0 && year%100!=0) || year % 400 == 0)
		daysPerMonth[1] = 29;
		
	int i;
	int sum = 0;
		
	for (i=0; i<month-1; i++) {
		sum += daysPerMonth[i];
	}
	printf("%d", sum+day);
	return 0;
}
