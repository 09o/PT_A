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
	strcat()�������������ַ�������ԭ��Ϊ char *strcat(char *dest, const char *src);
	strcat() �Ὣ���� src �ַ������Ƶ����� dest ��ָ���ַ���β����
	dest ���Ľ����ַ� NULL �ᱻ���ǵ����������Ӻ���ַ�����β��������һ�� NULL��
	ע�⣺dest��src��ָ���ڴ�ռ䲻���ص�����destҪ���㹻�Ŀռ�������Ҫ���Ƶ��ַ����� 
	*/
}
