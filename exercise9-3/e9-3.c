#include <stdio.h>
#include <math.h>

struct vector {
	double x;
	double y;
};

int main()
{
	struct vector v1, v2, v3;
	
	scanf("%lf %lf", &v1.x, &v1.y);
	scanf("%lf %lf", &v2.x, &v2.y);
	
	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	
	if (fabs(v3.x) < 0.05)
		v3.x = fabs(v3.x);
	if (fabs(v3.y) < 0.05)
		v3.y = fabs(v3.y);
		
	printf("(%.1f, %.1f)", v3.x, v3.y);
	
	return 0;
}
