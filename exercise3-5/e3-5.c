#include <stdio.h>
#include <math.h>

int main(void)
{
	int x1,y1,x2,y2,x3,y3;
	double l1=0.0,l2=0.0,l3=0.0;
	double L,A,halfL;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	if (1.0*x2/x1 == 1.0*y2/y1 && 1.0*x3/x2 == 1.0*y3/y2) {
		printf("Impossible");
	} else {
		l1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		l2 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
		l3 = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		L = l1+l2+l3;
		halfL = 1.0/2*L; 
		A = sqrt(halfL*(halfL-l1)*(halfL-l2)*(halfL-l3));
		printf("L = %.2f, A = %.2f", L, A);
	}	
	return 0;
}
