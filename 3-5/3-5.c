#include <stdio.h>

int main(int argc, char const *argv[])
{
	int year;
	int srt;
	int cnt = 0;
	scanf("%d", &year);
	
	if ( year>=2001 && year <= 2100 )
		for ( srt=2001; srt<=year; srt++ ) {
			if ((srt%4==0 && srt%100!=0) || srt%400==0)
				printf("%d\n", srt);
				cnt ++;
		if (cnt == 0)
			printf("None");
		}
	else
		printf("Invalid year!");
	return 0;
}
