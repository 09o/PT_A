#include <stdio.h>
#define MAXN 6

int main()
{
	int n, i, j, k, row, col, flag;
	int a[MAXN][MAXN];
	
	scanf("%d", &n);
	// һ������ 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	}
	
	for (i = 0; i < n; i++) {
		col = 0;
		flag = 1;
		// ��һ�����ҵ����Ԫ��ֵ�����е����� 
		for (j = 0; j < n; j++) {
			if (a[i][col] <= a[i][j])
				col = j;
		}
		// �ж��ڸ������Ƿ�Ϊ��Сֵ 
		for (k = 0; k < n; k++) {
			if (a[i][col] > a[k][col]) {
				flag = 0;
				break;
			}
		}
		// flag=1 ˵���ڸ����ϲ���������ֵ
		if (flag) {
			row = i;
			break;
		} 
	}
	
	if (flag) printf("%d %d\n", row, col);
	else printf("NONE\n");
	
	return 0;
}
