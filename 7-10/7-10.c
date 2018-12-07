#include <stdio.h>

int main()
{
	char a, ch;	
	scanf("%c\n", &a);
	
	int i;
	int cnt = 0, idx = -1;
	char str[80];
	ch = getchar();
	for (i=0;ch!='\n';i++) {
//		str[i] = ch;
//		cnt++;
//		ch = getchar();
		cnt++;
		if (a == ch)
			idx = cnt;
		ch = getchar();
	}
//	for (i=0;i<cnt;i++) {
//		if (a==str[i])
//			idx = i;
//	}
	if (idx != -1)
		printf("index = %d\n", idx-1);
	else
		printf("Not Found\n");
	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	char a, ch;	
//	scanf("%c\n", &a);
//	
//	int i;
//	int cnt = 0, idx = -1;
//	char str[80];
//	ch = getchar();
//	for (i=0;ch!='\n';i++) {
//		str[i] = ch;
//		cnt++;
//		ch = getchar();
//	}
//	for (i=0;i<cnt;i++) {
//		if (a==str[i])
//			idx = i;
//	}
//	if (idx != -1)
//		printf("index = %d\n", idx);
//	else
//		printf("Not Found\n");
//	return 0;
//}
