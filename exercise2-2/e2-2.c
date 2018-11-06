#include <stdio.h>

int main()
{
	int used;
	double cost;
	
	scanf("%d", &used);
	
	if (used < 0) {
		printf("Invalid Value!");
	} else if ( used <= 50 ) {
		printf("cost = %.2f", used * 0.53);
	} else {
		cost =  used * 0.53 + (used - 50) * (0.53 + 0.05);
		printf("cost = %.2f", cost);
	}
	
	return 0;
}
