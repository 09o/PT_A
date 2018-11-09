#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
	printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

int CountDigit( int number, int digit )
{
	int i = 0;
	int cnt = 0;
	if (number < 0 ) number *= -1;
	do {
		i = number % 10;
		number = number/ 10;
		if ( i == digit ) {
			cnt += 1;
		}
	} while (number > 0);
	return cnt;
}
