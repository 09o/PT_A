#include <stdio.h>

int main()
{
	int lower, upper;
	int i;
	scanf("%d %d", &lower, &upper);
	
	if ( lower<upper ) {
		printf("fahr celsius\n");
		for ( i=lower;i<=upper;i+=2 ) {
			printf("%d%6.1f\n", i, 5 * (i-32.0) / 9);
		}
	} else {
		printf("Invalid.");
	}
	return 0;
}
