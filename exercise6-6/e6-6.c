#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse(int number)
{
	int flag, mol;
	int newNumber = 0;
	
	if (number<0) {
		flag = 1;
		number*=-1;
	}
	while (number!=0) {
		mol = number % 10;
		number /= 10;
		newNumber = newNumber*10+mol;
	}
	if (flag) newNumber *= -1;
	return newNumber;
}
