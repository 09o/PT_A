#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

int main()
{
    char s[MAXS] = "helloworld";

    Shift(s);
    printf("%s\n", s);
	
    return 0; 
}

void Shift(char s[])
{
	char a[3];
	int i, j;
	for (i = 0; i < 3; i++)  // ��ǰ�����ַ��絽a�� 
		a[i] = s[i];
	for (i = 3; s[i]!='\0'; i++) // ����ǰ�����ַ���������ַ�ǰ������λ�� 
		s[i-3] = s[i];
	for (j = i-3, i = 0; i < 3; i++)  // ����ʼ�ַ����е�ǰ�����ַ��ƶ������ 
		s[j++] = a[i];
}
