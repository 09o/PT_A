// 动态分配
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;
	double sum = 0;
	double aver;
	double *p;
	
	// The total numbers of students 
	scanf("%d", &n);
	
	if ((p=(double *)calloc(n, sizeof(double))) == NULL)
	{
		printf("分配内存失败\n");
		exit(1);
	}
	
	for (i=0; i<n; i++) {
		scanf("%lf", p+i);
	}
	
	double min = *(p+0);
	double max = *(p+0);
	
	for (i=0; i<n; i++) {
		sum = sum + *(p+i);
		if (*(p+i) < min)
			min = *(p+i);
		if (*(p+i) > max)
			max = *(p+i);
	}
	aver = sum/n;
	printf("average = %.2f\n", aver);
	printf("max = %.2f\n", max);
	printf("min = %.2f\n", min);
	
	free(p);
	
	return 0;
}


//#include <stdio.h>
//
//int main()
//{
//	int n, i, j;
//	float sum = 0, ave = 0, max = 0, min = 0;
//	scanf("%d", &n);
//	int a[n];
//	
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//		sum += a[i];
//	}
//	
//	min = a[0];
//	for (i = 0; i < n; i++) {
//		if (a[i] > max)
//			max = a[i];
//		if (a[i] < min)
//			min = a[i];
//	}
//	
//	printf("average = %.2f\nmax = %.2f\nmin = %.2f\n",
//			(float)sum/n, max, min);
//	
//	return 0;
//} 
