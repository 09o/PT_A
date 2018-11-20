#include <stdio.h>

int main()
{
	int i, sum;
	int error = 0;
	char op= '0';
	scanf("%d", &sum);  // 读取第一位数 
	while (op!='=') {
		scanf("%c",&op);  // 读取符号 
		if (op=='=') break;
		scanf("%d",&i);  // 读取下一位数字 
		if (op=='+') {
			sum += i;
		} else if (op=='-') {
			sum -= i;
		} else if (op=='*') {
			sum *= i;
		} else if (op=='/') {
			if (i==0) {
				error = 1;
			} else {
				sum /= i;
			}
		} else {
			error = 1;
		}
	}
	if (error) printf("ERROR");
	else printf("%d\n", sum);
	return 0;
}
