#include <stdio.h>
#define MAXN 6

int main()
{
	int n, i, j, k, row, col, flag;
	int a[MAXN][MAXN];
	
	scanf("%d", &n);
	// 一个矩阵 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	
	for (i = 0; i < n; i++) {
		col = 0;
		flag = 1;
		// 在一行中找到最大元素值所在列的索引 
		for (j = 0; j < n; j++) {
			if (a[i][col] <= a[i][j])
				col = j;
		}
		// 判断在该列上是否为最小值 
		for (k = 0; k < n; k++) {
			if (a[i][col] > a[k][col]) {
				flag = 0;
				break;
			}
		}
		// flag=1 说明在该列上不大于其他值
		if (flag) {
			row = i;
			break;
		} 
	}
	
	if (flag) printf("%d %d\n", row, col);
	else printf("NONE\n");
	
	return 0;
}
