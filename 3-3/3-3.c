 #include <stdio.h>
 
 int main()
 {
 	int n, i, score;
	int cnt=0;
	int sum=0;
 	double aver;
 	
 	scanf("%d", &n);
 	for ( i=1; i<=n; i++) {
 		scanf("%d", &score);
 		if (score>=60) cnt+=1;
 		sum += score;
	}
	 
	aver = 1.0 * sum / n;
	printf("average = %.1f\ncount = %d", aver, cnt);
 	
 	return 0;
 	
 }
