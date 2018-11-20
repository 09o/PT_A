#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;  // 判断是否小于6
    if ( m%2 ) m++;  // 判断是否为偶数 
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

int prime(int p)
{
	int i;
	int ret = 1;
	if (p==2) ret = 1;
	for (i=2;i<=sqrt(p)+1;i++) {
		if (p%i==0) {
			ret = 0;
			break;
		}
	}
	return ret;	
}

//void Goldbach(int n)
//{
//	int i, j;
//	int ret=0;
//	for (i=2;i<=n/2;i++) {
//		if (prime(i)) {
//			for (j=i;j<=n-2;j++) {
//				if (prime(j) && i+j==n) {
//					ret = 1;
//					printf("%d=%d+%d", n, i, j);
//					break;
//				}
//			}
//		}
//		if (ret) break;
//	}
//}



void Goldbach(int n)
{
	int i;
	int cnt = 0;
	for (i=2;i<=n/2;i++) {
		if (prime(i)&&prime(n-i)) {
			cnt++;
			if (cnt) {
				printf("%d=%d+%d",n,i,n-i);
				break;
			}
		}
	}
}
