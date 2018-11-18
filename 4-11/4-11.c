#include <stdio.h>
#include <math.h>

int main(void)
{
	int M, N;
	int i, j, ret;
	int cnt=0, sum=0;
	scanf("%d %d", &M, &N);
	
	for (i=M; i<=N; i++) {
		ret = 1;
		if (i == 2) ret = 1;
		for (j=2; j<=sqrt(i); j++) {
			if (i % j == 0) {
				ret = 0;
				break;
			}
		}
		if (ret == 1) {
			cnt += 1;
			sum += i;
		}
	}
	printf("%d %d", cnt, sum);
	return 0;
}
