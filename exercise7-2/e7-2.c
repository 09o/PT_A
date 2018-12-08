#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n); 
	int a[n];
	int counter[10] = {0};  // ��ʼһ������Ϊ10�����飬���ֱ��Ӧ0-9��ʮ������ 
	int i;
	
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	// �ж���һ������ÿ�������ֵĸ��� 
	for (i=0; i<n; i++) {
		int mol;
		do {
			mol = a[i] % 10;
			counter[mol]++;
			a[i] /= 10;
		} while (a[i] != 0);
	}
	
	// �жϵ�һ�γ��ִ��������������� 
	int idx=1;
	for (i=0; i<10; i++) {
		if (counter[i] > counter[idx]) {
			idx = i;
		}
	}
	
	// �ж��Ƿ��������ͬ������������������ 
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
