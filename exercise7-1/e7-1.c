#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for (i=0;i<n;i++) {
		scanf("%d", &a[i]);
	}
	
	int j, idx, temp;
	for (i=0;i<n-1;i++) {
		idx = i;
		for (j=i+1;j<n;j++) {
			if (a[j] > a[idx])
				idx = j;
		}
		temp = a[idx];
		a[idx] = a[i];
		a[i] = temp;
	}
	
	for (i=0;i<n;i++) {
		printf("%d", a[i]);
		if (i!=n-1) printf(" ");
		else printf("\n");
	}
	return 0;
}
