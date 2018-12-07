#include <stdio.h>

int main()
{
	char ch, str[80];
	int i, cnt;
	
	ch = getchar();
	for (i=0;ch!='\n';i++) {
		str[i] = ch;
		cnt++;
		ch = getchar();
	}
	
	for (i=cnt-1;i>=0; i--) {
		printf("%c", str[i]);
	}
	return 0;
}
