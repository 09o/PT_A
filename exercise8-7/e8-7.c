#include <stdio.h>
#include <string.h>

#define M 5
#define N 85

int main()
{
	int i, j;
	char ch;
	char a[M][N] = {'0'};
	char temp[N];
	
	for (i = 0; i < M; i++) {
		ch = getchar();
		for (j = 0; ch != ' '; j++) {
			a[i][j] = ch;
			ch = getchar();
			if (ch == '\n')
				break;
		}
	}
	
	// ð������ 
	// ���� M-1 �Σ�
	// �������һ�е���С��..�����ظ�M-1-1�μ������������ 
	// ��Ϊ���һ�в�����Ҫ���бȽϴ�С 
	for (i = 0; i < M - 1; i ++) {
		for (j = 0; j < M - i - 1; j++) {
			if (strcmp(a[j], a[j+1]) > 0) {
				strcpy(temp, a[j]);
				strcpy(a[j], a[j+1]);
				strcpy(a[j+1], temp);
			}
		}
	}
	
	printf("After sorted:\n");
	for (i = 0; i < M; i++) {
		printf("%s\n", a[i]);
	}
		
	return 0;
}
