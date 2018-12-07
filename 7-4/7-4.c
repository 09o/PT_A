#include <stdio.h>

int main()
{
	int i,j,n1,n2,flag;
	int a[20];
	int b[20];
	
	// 数组a 
	scanf("%d", &n1);
	for (i=0;i<n1;i++) scanf("%d", &a[i]);
	
	// 数组b 
	scanf("%d", &n2);
	for (i=0;i<n2;i++) scanf("%d", &b[i]);
	
	int cnt = 0;
	int c[20];
	
	// 判断在数组a中有与数组b中不相同的数 
	for (j=0;j<n1;j++) {
		flag = 0; // 初始变量flag用于判断两数是否相同 
		for (i=0;i<n2;i++) {
			if (a[j] == b[i]) flag = 1; // 该数与b中某数相同
		}
		// 当该数和b中任意一个数都不相同时 
		if (flag == 0) {
			int k;
			int flag1 = 0;  // 初始变量flag1判断该数是否与数组c中的数相等 
			for (k=0;k<cnt;k++) {  // cnt为数组c中数的个数 
				if (c[k] == a[j]) {
					flag1 = 1;  // 如果两个数相等 
				}
			}
			if (flag1 == 0) {  // 当该数与数组中的数不等时 
				c[cnt] = a[j];  // 初始cnt为0，即数组中的index，将概述加入数组c中 
				cnt++;  // 数组c的个数，即index前进到下一位 
			}
		}
	}  // -----> 输出在数组a中所有与数组b中不同的数组c，且c中每个元素都不相等 
	
	// 在数组b中所有与数组a中不等的数 
	for (j=0;j<n2;j++) {
		flag = 0;
		for (i=0;i<n2;i++) {
			if (b[j] == a[i]) flag = 1;  // 当该数和a中某数相同时 
		}
		if (flag == 0) {  // 如果不相同 
			int k, flag1=0;
			for (k=0;k<cnt;k++) {  // 此时cnt不等于0，即数组c不为空，cnt为数组的元素个数 
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
