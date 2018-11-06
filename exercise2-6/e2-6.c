#include <stdio.h>

int factorial(int x);

int main()
{
	int n, i;
	int sum = 0;
	
	scanf("%d", &n);
	
	for ( i=1; i<=n; i++ ) {
		sum += factorial(i);
	}	
	printf("%d", sum);
	return 0;
}

int factorial(int x)
{
	int i;
	int res=1;
	
	for ( i=1; i<=x; i++ ) {
		res *= i;
	}	
	return res;
}
