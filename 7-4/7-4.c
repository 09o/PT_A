#include <stdio.h>

int main()
{
	int i,j,n1,n2,flag;
	int a[20];
	int b[20];
	
	// ����a 
	scanf("%d", &n1);
	for (i=0;i<n1;i++) scanf("%d", &a[i]);
	
	// ����b 
	scanf("%d", &n2);
	for (i=0;i<n2;i++) scanf("%d", &b[i]);
	
	int cnt = 0;
	int c[20];
	
	// �ж�������a����������b�в���ͬ���� 
	for (j=0;j<n1;j++) {
		flag = 0; // ��ʼ����flag�����ж������Ƿ���ͬ 
		for (i=0;i<n2;i++) {
			if (a[j] == b[i]) flag = 1; // ������b��ĳ����ͬ
		}
		// ��������b������һ����������ͬʱ 
		if (flag == 0) {
			int k;
			int flag1 = 0;  // ��ʼ����flag1�жϸ����Ƿ�������c�е������ 
			for (k=0;k<cnt;k++) {  // cntΪ����c�����ĸ��� 
				if (c[k] == a[j]) {
					flag1 = 1;  // ������������ 
				}
			}
			if (flag1 == 0) {  // �������������е�������ʱ 
				c[cnt] = a[j];  // ��ʼcntΪ0���������е�index����������������c�� 
				cnt++;  // ����c�ĸ�������indexǰ������һλ 
			}
		}
	}  // -----> ���������a������������b�в�ͬ������c����c��ÿ��Ԫ�ض������ 
	
	// ������b������������a�в��ȵ��� 
	for (j=0;j<n2;j++) {
		flag = 0;
		for (i=0;i<n2;i++) {
			if (b[j] == a[i]) flag = 1;  // ��������a��ĳ����ͬʱ 
		}
		if (flag == 0) {  // �������ͬ 
			int k, flag1=0;
			for (k=0;k<cnt;k++) {  // ��ʱcnt������0��������c��Ϊ�գ�cntΪ�����Ԫ�ظ��� 
				if (c[k] == b[j]) {
					flag1 = 1;
				}
			}
			if (flag1 == 0) {
				c[cnt] = b[j];
				cnt++;
			}
		}
	}
	
	for (i=0;i<cnt;i++) {
		printf("%d", c[i]);
		if (i!=cnt-1) printf(" ");
	}
	
	return 0;
}
