#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number )
{
	int i;
	int figure = 0;
	int sum = 0;
	int n2 = number;
	int n3 = number;
	
	while ( n2>0 ) {
		n2 /= 10;
		figure += 1;
	}
	
	do {
		int res=1;
		for (i=0;i<figure;i++) {
			res *= n3 % 10;
		}
		sum += res;
		n3 /= 10;
	} while (n3 > 0);
	
	switch(number==sum){
		case 1:return 1;break;
		case 0:return 0;break;
	}
}

void PrintN( int m, int n )
{
	int i;
	for ( i=m+1;i<=n;i++ ) {
		if (narcissistic(i)) printf("%d\n", i);
	}
	// 暂时还没有想到如何删掉最后一个换行符的方法 
}
