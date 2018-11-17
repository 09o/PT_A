#include <stdio.h>

int main(void)
{
	int number, n, inp;
	int cnt = 0, finished = 0;
	scanf("%d %d", &number, &n);
	do {
		cnt++;
		scanf("%d", &inp);
		if ( inp < 0) {
			printf("Game Over\n");
			finished = 1;
		} else if ( inp > number ) {
			printf("Too big\n");
		} else if ( inp < number) {
			printf("Too small\n");
		} else {
			if ( cnt == 1 ) printf("Bingo!\n");
			else if ( cnt <= 3 ) printf("Lucky You!\n");
			else printf("Good Guess!\n");
			finished = 1;
		}
		if ( cnt == n) {
			if ( !finished ) {
				printf("Game Over\n");
				finished = 1;
			}
		}
	} while ( !finished );
	return 0;
}
