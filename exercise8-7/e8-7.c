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
	
	// 冒泡排序 
	// 进行 M-1 次；
	// 先求出第一行的最小的..接着重复M-1-1次即可求得排序结果 
	// 因为最后一行不再需要进行比较大小 
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
