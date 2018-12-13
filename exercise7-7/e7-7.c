#include <stdio.h>

int main()
{
	char ch;
	
	ch = getchar();
	while (ch!='\n') {
		if (ch >= 'A' && ch <= 'Z') {
			ch = 'Z' - (ch - 'A');
		}		
		printf("%c", ch);
		ch = getchar();
	}
	
	return 0;
}
