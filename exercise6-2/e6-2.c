#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main()
{
	int a, n;
	
	scanf("%d %d", &a, &n);
	printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
	printf("s = %d\n", SumA(a,n));
	
	return 0;
}

int fn(int a, int n)
{
	int i;
	int number = 0;
	for (i=0;i<n;i++) {
		number = number * 10 + a;
	}
	return number;
}

int SumA(int a, int n)
{
	int i;
	int number = 0, sum = 0;
	for (i=0;i<n;i++) {
		number = number * 10 + a;
		sum += number;
	}
	return sum;
}
