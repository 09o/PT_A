#include <stdio.h>

int main(void)
{
	int m, n;
	int gcd, lcm;
	scanf("%d %d", &m, &n);
	int m2=m, n2=n;
	while (n!=0) {
		int gcd=n;
		n = m%n;
		m = gcd;
	}
	gcd = m;
	lcm = m2*n2/gcd;	
	printf("%d %d", gcd, lcm);
	
	return 0;
}
