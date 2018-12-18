#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );

int main()
{
    char s[MAXN] = {0};
    int m;
    char t[MAXN] = "happy new year";

    scanf("%d", &m);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

void strmcpy(char *t, int m, char *s)
{
	int i, j = 0;
	for (i = m - 1; t[i] != '\0'; i++) {
		s[j] = t[i];
		j++;
	}
	s[j] = '\0';
}
