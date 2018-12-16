// Method 1 动态分配 
#include <stdio.h>
#include <stdlib.h>

typedef struct book {
	char name[30];
	double price;
} book;

int main()
{
	int n, i, maxidx = 0, minidx = 0;
	book *p;
	
	scanf("%d", &n);
	p = (book*)malloc(sizeof(book)*n);
	
	for (i = 0; i < n; i++) {
		scanf("\n");
		gets(p[i].name);
		scanf("%lf", &p[i].price);
	}
	
	for (i = 1; i < n; i++) {
		if (p[i].price > p[maxidx].price)
			maxidx = i;
		if (p[i].price < p[minidx].price)
			minidx = i;
	}
	
	printf("%.2f, %s\n", p[maxidx].price, p[maxidx].name);
	printf("%.2f, %s\n", p[minidx].price, p[minidx].name);
	
	free(p);
	
	return 0;
}



// Method 2
//#include <stdio.h>
//
//struct book {
//	char name[30];
//	double price;
//};
//
//int main()
//{
//	struct book books[10];
//	int n, i, maxidx, minidx;
//	double maxP = 0, minP = 1.7e+308;
//	scanf("%d", &n);
//	
//	// 获取书籍信息 
//	for (i = 0; i < n; i++) {
//		scanf("\n");   // 匹配换行符，不做任何处理。避免被接下来的gets()误输入
//		gets(books[i].name);
//		scanf("%lf", &books[i].price);
//	}
//	
//	for (i = 0; i < n; i++) {
//		if (books[i].price > maxP) {
//			maxP = books[i].price;
//			maxidx = i;
//		}
//		if (books[i].price < minP) {
//			minP = books[i].price;
//			minidx = i;
//		}
//	}
//	
//	printf("%.2f, %s\n", maxP, books[maxidx].name);
//	printf("%.2f, %s\n", minP, books[minidx].name);
//	
//	return 0;
//}
