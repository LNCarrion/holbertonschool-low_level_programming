#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
*main - will print a random number
*
* Description:determine if the random number is positive or negative
* Return: 0
*/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	printf("the last digit of %d is %d ", n, l);

	if (l > 5)
		printf("is greater that 5\n");
	else if (l == 0)
		printf("and is 0\n");
	else if (l < 6)
		printf("and is less than 6 but not 0\n");
	return (0);
}

