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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);

	if (n > 0)
		printf("%d is positive/", n);
	else if (n == 0)
		printf("%d is zero/", n);
	else
		printf("%d is negative/", n);
	return (0);


}
