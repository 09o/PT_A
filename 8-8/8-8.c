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
	for (i = 0; i < 3; i++)  // 将前三个字符寸到a中 
		a[i] = s[i];
	for (i = 3; s[i]!='\0'; i++) // 将除前三个字符外的所有字符前进三个位置 
		s[i-3] = s[i];
	for (j = i-3, i = 0; i < 3; i++)  // 将初始字符串中的前三个字符移动到最后 
		s[j++] = a[i];
}
