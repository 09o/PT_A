#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d", &m);
	int b[m];  // ���������жϽ��
	int i,j,k;
	for (k=0;k<m;k++) {	
		scanf("%d", &n);
		int a[n][n];
		int cnt = 0;
		
		// ������� 
		for (i=0;i<n;i++) {
			for (j=0;j<n;j++)
				scanf("%d", &a[i][j]);
		}
		
		// ͳ�����Խ�������Ϊ���Ԫ�ظ��� 
		for (i=0;i<n;i++) {
			for (j=0;j<n;j++) {
				if (i>j && a[i][j]==0)
					cnt++;
			}
		}
		
		// �ж����Խ������Ƿ�ȫΪ�� 
		if (cnt == ((n*n)-n)/2)
			b[k] = 1;
		else
			b[k] = 0;
	}
	
	for (k=0;k<m;k++) {
		if (b[k] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
