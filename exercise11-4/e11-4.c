#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};

    scanf("%s %s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);

    return 0;
}

char *str_cat( char *s, char *t )
{
	s = strcat(s, t);
	return s;
	/*
	strcat()函数用来连接字符串，其原型为 char *strcat(char *dest, const char *src);
	strcat() 会将参数 src 字符串复制到参数 dest 所指的字符串尾部；
	dest 最后的结束字符 NULL 会被覆盖掉，并在连接后的字符串的尾部再增加一个 NULL。
	注意：dest与src所指的内存空间不能重叠，且dest要有足够的空间来容纳要复制的字符串。 
	*/
}
