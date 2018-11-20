#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib(int n)
{
	int i, t;
	int pre = 0, now = 1, loc = 1;
	while (loc<n) {
		loc ++;
		t = pre + now;
		pre = now;
		now = t;
	}
	return now;
}

void PrintFN(int m, int n)
{
	int i=1;
	int flag = 1;
	int cnt = 0;
	while (fib(i)<m) i++;
	while (fib(i)<=n) {
		if (flag) {
			printf("%d", fib(i));
			flag = 0;
		} else {
			printf(" %d", fib(i));
		}
		cnt++;
		i++;
	}
	if (cnt==0) printf("No Fibonacci number\n");
}
