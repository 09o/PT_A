#include <stdio.h>
#define MAXN 20

//  ע�⣺��������ÿ���˵��˳�˳�򣬶����ǰ��˳�˳������Ӧ����һ����
void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

void CountOff(int n, int m, int out[])
{
	int i=0, j=0, k=0, cnt=0, a[MAXN];
//	int step;  //������ 
	for (i = 0; i < n; i++)
		a[i] = i+1; // ��n=5 => a[5] = {1, 2, 3, 4, 5}
	i = 0;
	while (cnt < n) {  // out��������������n 
//		step++;  // for test
		if (a[i] != 0)  // ��out 
			k++;  // �������� 

		if (k==m) {    // ����ָ���� 
			j++;
			out[i] = j;   // ���out 
			k = 0;  // �������� 
			cnt++;  // ������һ 
			a[i] = 0;  // out��ǰλ��Ϊ 0
		}
		// ������ 
//		printf("Step %d: Now i = %d; k = %d; j = %d; cnt = %d; out[%d] = %d\n", step, i, k, j, cnt, i, out[i]);
		i++;
		if (i == n) i = 0;
	
	}
}
