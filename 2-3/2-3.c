#include <stdio.h>

int main()
{
	int i, j;
	
	for ( i=0; i<4; i++ ) {
		for ( j=0; j<i; j++ ) {
			printf(" ");
		}
		for ( j=4-i; j>1; j-- ) {
			printf("* ");
		}
		printf("*");
		if ( i<3) {  // ���һ�в���ӡ���з� 
			printf("\n");
		}
	}
	return 0;
}

