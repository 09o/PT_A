#include <stdio.h>

int main(void)
{
	int h, n;
	int i;
	int c=2;
	double lst;
	scanf("%d %d", &h, &n);
	double s = h;
	for (i=1;i<n;i++) {
		s += 2.0*h/c;
		c *= 2;
		if (i==n-1) {
			lst = 1.0*h/c;
		}
	}
	printf("%.1f %.1f", s, lst);
	return 0;
}
