#include <stdio.h>

int main(void)
{
	int n, row;
	int i, j, k;
	scanf("%d", &n);
	row = n/2;
	for (i=1;i<=row+1;i++) {
		for (j=0;j<row+1-i;j++) printf("  ");
		for (k=0;k<2*i-1;k++) printf("* ");
		printf("\n");
	}
	for (i=row;i>0;i--) {
		for (j=0;j<row+1-i;j++) printf("  ");
		for (k=0;k<2*i-1;k++) printf("* ");
		if (i!=1) printf("\n");
	}
	return 0;
}
