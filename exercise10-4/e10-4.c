#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));

    return 0;
}

double fn( double x, int n )
{
	if ( n == 1 )
		return x;
	else
		return x + (-1) * x * fn(x, n-1);
		/*
		≡(▔﹏▔)≡ 随便试就出来了，但完全不清楚怎么个情况啊，唉。。脑壳痛啊。。。 
		/(ㄒoㄒ)/~~
		::>_<::
		〒▽〒
		≧ ﹏ ≦
		(；′⌒`)
		(≧﹏ ≦)
		~~>_<~~
		(T_T)
		*/
}
