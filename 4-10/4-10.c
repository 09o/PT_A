#include <stdio.h>
 
int main(void)
{  
	int n,min,num;
	int i;
	int cnt=0;
	scanf("%d",&n);
	for (i=1; i<=n; i++) {
		cnt++;
		scanf("%d",&num);
		if (cnt == 1) min=num;
		if (num < min) min=num;
	}
	printf("min = %d",min);
    return 0;
}

