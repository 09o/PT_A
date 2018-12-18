#include <stdio.h>
#define MAXN 10

int ArrayShift(int a[], int n, int m);

int main()
{
	int a[MAXN], n, m;  // n => 数组大小, m => 右移位数 
	int i;
	
	scanf("%d %d", &n, &m);
	for (i = 0; i< n; i++) scanf("%d", &a[i]);
	
	ArrayShift(a, n, m);
	
	for (i = 0; i < n; i++) {
		if (i != 0) printf(" ");
		printf("%d", a[i]);
	}
	printf("\n");
	
	return 0;
}

int ArrayShift(int a[], int n, int m)
{
	int i, temp[n];
	for (i = 0; i < n; i++)
		temp[i] = a[i];
	
	for (i = 0; i < n; i++) {
		if (m+i < n)
			a[m+i] = temp[i];
		else
			a[(m+i)%n] = temp[i]; 
	}
	return a[n];
}
