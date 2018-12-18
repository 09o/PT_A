#include <stdio.h>
#include <math.h>

const int begin=101;

int search( int n );

int main()
{
    int number;
	
    scanf("%d",&number);
    
	/* search(number); */
    
    printf("count = %d\n", search(number));
    
    return 0;
}

int search ( int n )
{
	int i, j, flag, temp, d[3], cnt = 0;
	/* for test
	int f[50], k = 0;
	*/
	for (i = begin; i <= n; i++) {
		temp = i;
		flag = 0;
		// 将每个数字放入数组中 
		for (j = 0; j < 3; j++) {
			d[j] = temp % 10;
			temp /= 10;
		}
		// 确定该数是否存在两个数字相等 
		if (d[0] == d[1] || d[1] == d[2] || d[2] == d[0])
			flag = 1;
		// 确定该数是否为完全平方数 
		if (flag) {
			if (sqrt(i) == (int)sqrt(i)) {
				cnt++;
				/* for test
				f[k] = i;
				k++;
				*/
			}
		}
	}
	return cnt;
	/* for test
	for (i = 0; i < cnt; i++) {
		printf("%d ", f[i]);
	}
	*/
}
