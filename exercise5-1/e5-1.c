#include <stdio.h>

int sign(int x);
int main()
{
	int x;
	
	scanf("%d", &x);
	printf("sign(%d) = %d\n", x, sign(x));
	
	return 0;
}

int sign(int x)
{
	int res;
	switch(x>0)	{
	case 1:res=1;break;
	case 0:
		switch(x==0) {
			case 1:res=0;break;
			case 0:res=-1;break;
		}
	}
	return res;
}
