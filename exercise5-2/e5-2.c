#include <stdio.h>

#define MAXN 10

int even(int n);
int OddSum(int List[], int N);

int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");  // 这玩意有个bug啊，根本不能实现 Sum of (奇数) = ... 
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

int even(int n)
{	
	switch (n%2==0) {
		case 1:return 1;break;
		case 0:return 0;break;
	}
}

int OddSum(int List[], int N)
{
	int i;
	int sum=0;
	for ( i=0; i<N; i++ ) {
		if ( even(List[i]) == 0 ) {
			sum += List[i];
		}
	}
	return sum;
}
