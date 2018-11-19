#include <stdio.h>

int main(void)
{
	int change,i,j,k;
	int cnt = 0;
	scanf("%d", &change);
	for (i=1;i<=change;i++){
		for (j=1;j<=change/2;j++) {
			for (k=1;k<=change/5;k++) {
				if (i+j*2+k*5 == change) {
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",
							k, j, i, i+j+k);
					cnt+=1;
				}
			}
		}
	}
	printf("count = %d", cnt);
	return 0;
}
