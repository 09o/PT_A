#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );

int main()
{
    char c;
    char str[MAXN] = "happy new year";

    scanf("%c", &c);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

void delchar( char *str, char c)
{
	int i, t = 0;
	for (i = 0; str[i]!='\0'; i++) {
		str[t] = str[i];  
		if (str[i] != c)
			t++;		 // �ڵ�ǰ�ַ���ȵ������ t+1������������һλ	
	}
	str[t] = '\0';  
	/* ��ɾ���˲����ַ���
	�����ǰ��ַ����е�ÿ���ַ����ڵ�ַ����ǰ�ƶ��ˣ�
	ֻ����ԭ��ַ�н����ֵ�ַ��Ӧ��ֵ������һ����ֵ���ѣ�
	
	���磻ԭ�ַ���Ϊ 
	==> happy new year\0 
	�����ַ��ӦΪ
	==> 0123456789abcde
	Ҫɾ���ַ�Ϊ 'a'������ַû��
	==> 0123456789abcde
	ֻ�ǲ��ֵ�ַ����Ӧ���ַ��仯��
	==> hppy new yerar\0
	*/ 
}

