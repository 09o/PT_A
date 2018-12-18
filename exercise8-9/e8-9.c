#include <stdio.h>
#define MAXS 15

void StringCount( char *s );

int main()
{
    char s[MAXS] = "aZ&*?\n093 Az";
    
    StringCount(s);

    return 0;
}

void StringCount(char *s)
{
	/* {��д��ĸ��Сд��ĸ���ո����֣������ַ�����}*/
	int cnt[5] = {0};
	int i;
	
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') cnt[0]++;
		else if (s[i] >= 'a' && s[i] <= 'z') cnt[1]++;
		else if (s[i] == ' ') cnt[2]++;
		else if (s[i] >= '0' && s[i] <= '9') cnt[3]++;
		else cnt[4]++;
	}
	
	for (i = 0; i < 5; i++) {
		printf("%d", cnt[i]);
		if (i!=4) printf(" ");
		else printf("\n");
	}
}
