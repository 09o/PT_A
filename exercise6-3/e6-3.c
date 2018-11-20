#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int m, n;

	scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number )
{
    int i;
    int sum = 0;
    if (number == 1) sum = 1;
    for (i=1;i<=number/2;i++) {
        if (number%i==0) {
            sum += i;
        }
    }
    return sum;
}

void PrintPN( int m, int n )
{
    int i,j;
    int ret = 0;
    if (m==1) printf("%d = %d\n",m,m);
    for (i=m+1;i<=n;i++) {
        if (factorsum(i) == i) {
        	ret = 1;
            printf("%d = ", i);
            for (j=1;j<=i/2;j++) {
                if (i%j==0) {
                    printf("%d ", j);
                    if (j!=i/2) printf("+ ");
                }
            }
            printf("\n");
        }
    }
    if (ret==0) printf("No perfect number\n");
}
