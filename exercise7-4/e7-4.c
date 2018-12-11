#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int a[m][n];
	int i, j;
	int b[m];  // ´¢´æ½á¹û 
	for (i=0;i<m;i++) {
		int sum = 0;
		for (j=0;j<n;j++) {
			scanf("%d", &a[i][j]);
			sum += a[i][j];
		}
		b[i] = sum;
	}
	for (i=0;i<m;i++) {
		printf("%d\n", b[i]);
	}
	
	return 0;
}
