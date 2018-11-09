#include <stdio.h>

void pyramid(int n);

int main()
{
	int n;
	
	scanf("%d", &n);
	pyramid(n);
	
	return 0;
}

void pyramid(int n)
{
	int i,j,k;
	for ( i=1;i<=n;i++ ) {
		for ( j=0;j<n-i;j++) {
			printf(" ");
		}
		for (k=0;k<i;k++) {
			printf("%d ",i);
		}
		if (i<n) printf("\n");
	}
}