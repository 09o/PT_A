#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n); 
	int a[n];
	int counter[10] = {0};  // 初始一个长度为10的数组，即分别对应0-9这十个数字 
	int i;
	
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	// 判断这一批数字每个数出现的个数 
	for (i=0; i<n; i++) {
		int mol;
		do {
			mol = a[i] % 10;
			counter[mol]++;
			a[i] /= 10;
		} while (a[i] != 0);
	}
	
	// 判断第一次出现次数最多的数的索引 
	int idx=1;
	for (i=0; i<10; i++) {
		if (counter[i] > counter[idx]) {
			idx = i;
		}
	}
	
	// 判断是否存在其他同样出现最多次数的数字 
	int t = 0;
	for (i=0; i<10; i++) {
		if (counter[i] == counter[idx]) {
			counter[t] = i;
			t++;
		}
	}
	
	printf("%d: ", idx);
	for (i=0; i<t; i++) {
		printf("%d", counter[i]);
		if (i!=t-1) printf(" ");
		else printf("\n");
	}
	return 0;
}
