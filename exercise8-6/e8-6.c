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
			t++;		 // 在当前字符相等的情况下 t+1，即索引后移一位	
	}
	str[t] = '\0';  
	/* 在删除了部分字符后，
	并不是把字符串中的每个字符所在地址都向前移动了，
	只是在原地址中将部分地址对应的值赋予了一个新值而已；
	
	例如；原字符串为 
	==> happy new year\0 
	假设地址对应为
	==> 0123456789abcde
	要删除字符为 'a'，但地址没变
	==> 0123456789abcde
	只是部分地址所对应的字符变化了
	==> hppy new yerar\0
	*/ 
}

