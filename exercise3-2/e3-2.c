#include <stdio.h>
 
int main(void){
	int speed, max, x;
	scanf("%d %d", &speed, &max);
	
	x = (1.0 * (speed - max) / max) * 100 + 0.5;
	if( x >= 50 ) printf("Exceed %d%%. License Revoked", x);
	else if( x >= 10 ) printf("Exceed %d%%. Ticket 200", x);
	else printf("OK");
	
	return 0;
}

