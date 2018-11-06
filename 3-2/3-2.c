#include <stdio.h>

// 使用switch case 
int main()
{
	int n, res;
	scanf("%d", &n);
	
	switch ( n>0 ) {
		case 1:res=1;break;
		case 0:
			switch( n==0 ) {
				case 1:res=0;break;
				case 0:res=-1;break;
			}
	}
	printf("sign(%d) = %d",n, res);
	return 0;
}

// 使用if-else 
//int main()
//{
//	int n;
//	int res;
//	
//	scanf("%d", &n);
//	
//	if ( n == 0 ) {
//		res = 0;
//	} else if ( n < 0 ) {
//		res = -1;
//	} else {
//		res = 1;
//	}
//	
//	printf("sign(%d) = %d", n, res);
//	
//	return 0;
//}
