#include <stdio.h>
#include <math.h>

int main()
{
	char ch;
	int t = 0, flag = 0, cnt = 0;
	int sum = 0;
	int a[80];
	
	ch = getchar();
	while (ch != '#') {
		
		// 判断符号 
		if (!t && ch == '-')
			flag = 1;

		// 筛选十六进制符号 
		if ((ch>='a' && ch<='f') || (ch>='A' && ch <= 'F') || (ch >= '0' && ch <= '9')) {
			t = 1;
			a[cnt] = ch;
			cnt++;
		}
		
		ch = getchar();
	}
	
	// 转换成十进制数 
	int i, value;
	int times = 0;
	for (i = cnt-1; i >= 0; i--) {
		if (a[i]>='a' && a[i] <= 'f')
			value = a[i] - 'a' + 10;
		else if (a[i] >= 'A' && a[i] <= 'F')
			value = a[i] - 'A' + 10;
		else
			value = a[i] - '0';
		
		sum = sum + value * pow(16, times);
		times++;
	}
	
	if (flag) sum *= -1;
	
	printf("%d", sum);
	
	return 0;
}
