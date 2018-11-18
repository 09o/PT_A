#include <stdio.h> 

int main(void)
{
	int n, a, s, i;
	int N = 0;
	scanf("%d %d", &a, &n);
	for (i=0;i<n;i++) {
		N = N * 10 + a;
		s += N;
	}
	printf("s = %d", s);
	return 0;
}
