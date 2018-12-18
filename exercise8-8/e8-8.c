#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome(char *s)
{
	int len, i = 0, flag = 1;
	len = strlen(s);
	while (s[i] != '\0') {
		if (s[i] != s[len-1]) {
			flag = 0;
			break;
		}
		i++;
		len--;
	}
	if (flag) return 1;
	else return 0;
}
