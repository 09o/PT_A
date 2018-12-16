/*  1. 动态分配  */
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct {
//	char name[10];
//	int birth;
//	char phone[17];
//} contact;
//
//int main()
//{
//	contact* p, t;
//	char ch;
//	int n, i, j;
//	scanf("%d", &n);
//	scanf("\n");
//	p = (contact*)malloc(sizeof(contact)*n);
//	for (i = 0; i< n; i++) {
//		// contact.birth是一个变量，所有要加 & 
//		scanf("%s %d %s", p[i].name, &p[i].birth, p[i].phone);
//	}
//	
//	// 比较年龄大小 
//	for (i = 0; i < n - 1; i++) {
//		for (j = 0; j < n - 1 - i; j++) {
//			if (p[j].birth > p[j+1].birth) {  // 将年龄最小的移动到最后 
//				t = p[j];
//				p[j] = p[j+1];
//				p[j+1] = t;
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		printf("%s %d %s\n", p[i].name, p[i].birth, p[i].phone);
//	}
//	
//	free(p); 
//	return 0;
//}


/* 2  */
#include <stdio.h>

struct contact {
	char name[10];
	int birth;
	char phone[17];
};

int main()
{
	int n, i, j;
	scanf("%d", &n);
	struct contact contacts[n], temp;
	
	for (i = 0; i < n; i++) {
		scanf("%s %d %s", &contacts[i].name, &contacts[i].birth, &contacts[i].phone);
	}
	
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (contacts[j].birth > contacts[j+1].birth) {
				temp = contacts[j];
				contacts[j] = contacts[j+1];
				contacts[j+1] = temp;
			}
		}
	}
	
	for (i = 0; i < n; i++) {
		printf("%s %d %s\n", contacts[i].name, contacts[i].birth, contacts[i].phone);
	}
	
	return 0;
}
