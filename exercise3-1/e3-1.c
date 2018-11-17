#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b,c,maxM; 
	scanf("%d %d %d", &a, &b, &c);
	if (a>b) {
		maxM = a;
		a = b;
		b = maxM;
	}
	if (a>c) {
		maxM = a;
		a = c;
		c = maxM;
	}
	if (b>c) {
		maxM = b;
		b = c;
		c = maxM;
	}
	printf("%d->%d->%d",a, b, c);
	
	return 0;
}
