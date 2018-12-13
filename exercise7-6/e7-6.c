#include <stdio.h>

int main()
{
	char ch;
	int cnt = 0;
	ch = getchar();
	while (ch != '\n') {
		if (ch>'A' && ch<='Z' && ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
			cnt++;
		ch = getchar();
	}
	printf("%d", cnt);
	return 0;
}
