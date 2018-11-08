#include <stdio.h>

int max(int a, int b);
int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("max = %d", max(a,b));
	
	return 0;
}

int max(int a, int b)
{
	int res;
	switch(a>b)
	{
		case 1:res=a;break;
		case 0:res=b;break;
	}
	return res;
}
