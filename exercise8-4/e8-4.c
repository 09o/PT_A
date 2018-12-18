#include <stdio.h>
#define MAXN 20

//  注意：问题是问每个人的退出顺序，而不是按退出顺序所对应的哪一个人
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
//	int step;  //测试用 
	for (i = 0; i < n; i++)
		a[i] = i+1; // 若n=5 => a[5] = {1, 2, 3, 4, 5}
	i = 0;
	while (cnt < n) {  // out人数少于总人数n 
//		step++;  // for test
		if (a[i] != 0)  // 无out 
			k++;  // 报数增加 

		if (k==m) {    // 报到指定数 
			j++;
			out[i] = j;   // 标记out 
			k = 0;  // 报数归零 
			cnt++;  // 人数加一 
			a[i] = 0;  // out后当前位置为 0
		}
		// 测试用 
//		printf("Step %d: Now i = %d; k = %d; j = %d; cnt = %d; out[%d] = %d\n", step, i, k, j, cnt, i, out[i]);
		i++;
		if (i == n) i = 0;
	
	}
}
