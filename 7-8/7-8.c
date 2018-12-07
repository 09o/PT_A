#include <stdio.h>

int main()
{
	int m, n;
	int i, j;
	scanf("%d %d", &m, &n);
	int a[n][n];
	
	m = m % n;
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++)
			scanf("%d", &a[i][(m+j)%n]);
	}
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			printf("%d", a[i][j]);
			if (j!=n-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}


//#include <stdio.h>
//
//int main()
//{
//	int m, n;
//	int i, j;
//	scanf("%d %d", &m, &n);
//	int a[n][n];
//	
//	for (i=0;i<n;i++) {
//		for (j=0;j<n;j++)
//			scanf("%d", &a[i][j]);
//	}
//	m = m % n;
//	for (i=0;i<n;i++) {
//		for (j=0;j<n;j++) {
//			printf("%d", a[i][(n-m+j)%n]);
//			if (j != n-1)
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

