#include <stdio.h>
#include <math.h>

int main(void)
{
	int N, i, n, t;
	int sum;
	scanf("%d", &N);
	
	for ( i=pow(10,N-1);i<=pow(10,N)-1;i++) {
		n = i;
		sum = 0;
		do {
			t = n % 10;
			sum += pow(t, N);
			n /= 10;
		} while (n>0);
		if (sum==i) {
			printf("%d\n",i);
		}
	}
	return 0;
}
