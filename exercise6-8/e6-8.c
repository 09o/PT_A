#include <stdio.h>

int main()
{
	char str[1001];
	gets(str);
	int cnt = 0;
	int i = 0;

	while(str[i]!='\0') {
		if (str[i] != ' ') {
			cnt++;
			// 跳过一个单词中剩下的所有字母
			while(str[i]!=' ') {
				if (str[i] == '\0') break;
				i ++;
			}
		} else {
			i++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
