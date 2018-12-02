#include <stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	int a[n-1];  // 定义一个数组
	
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	int idx;
	idx = 0;
	for (i=1;i<n;i++) {
		if (a[i] > a[idx]) idx=i;
	}
	printf("%d %d", a[idx], idx);

}
