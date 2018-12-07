#include <stdio.h>

int main()
{
	int n, a[10][10];
	int i, j;
	int sum = 0;
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		for (j=1; j<=n; j++) {
			scanf("%d", &a[i][j]);
			if (i+j != n+1 && i != n && j != n) {
				sum += a[i][j];
			}
		}
	}
	printf("%d", sum);
	return 0;
}
