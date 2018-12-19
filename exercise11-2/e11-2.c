#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if ( n == -1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}

int getindex( char *s )
{
	char *weeks[7] = {"Sunday", "Monday", "Tuesday",
					"Wednesday", "Thursday", "Friday", "Saturday"};
//	int i, idx, flag = 0;
//					
//	for (i = 0; i < 7; i++) {
//		if (strcmp(s, weeks[i]) == 0) {
//			flag = 1;
//			idx = i;
//			break;
//		}
//	}
//	if (flag) return idx;
//	else return -1;

	int i;
	
	for (i = 0; i < 7; i++)
	  /* strcmp(str1, str2)
	  -> "==" ==> 0;
	  -> ">"  ==> positive number;
	  -> "<"  ==> negative number;
	  */
		if (strcmp(weeks[i], s) == 0)
			break;
			
	if (i == 7) i = -1;
	return i;
}
