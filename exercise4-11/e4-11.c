//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int n;
//	int cnt = 0, amount = 0;
//	scanf("%d", &n);
//	
//	do {
//		cnt++;
//		// 公式算法，可读性比较差 
//		amount = (1.0/sqrt(5)*(pow(((1+sqrt(5))/2.0),cnt)-pow(((1-sqrt(5))/2.0),cnt)));
//	} while (amount<n);
//	printf("%d", cnt);
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int n;
	int lst = 0, fst = 1,sum = 1;
	int cnt = 1;
	scanf("%d", &n);
	if (n==sum) printf("%d", cnt);
	else {
		int now = sum;
		do {			
			cnt++;
			sum = lst+now;
			lst = now;
			now = sum;
		} while (sum<n);
	}
	printf("%d", cnt);
	return 0;
}
