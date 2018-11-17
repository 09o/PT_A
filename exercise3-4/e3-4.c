#include <stdio.h>

int main(void)
{
	int n, s, i;
	int cntA=0,cntB=0,cntC=0,cntD=0,cntE=0;
	scanf("%d", &n);
	for ( i=0; i<n; i++ ) {
		scanf("%d", &s);
		if ( s >= 90 ) cntA += 1;
		else if ( s >= 80 ) cntB += 1;
		else if ( s >= 70 ) cntC += 1;
		else if ( s >= 60 ) cntD += 1;
		else cntE += 1;
	}
	printf("%d %d %d %d %d", cntA, cntB, cntC, cntD, cntE);
	return 0;
}
