#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
*main - will print the alphabet
*
* Description:listing the alphabet in lowercase and uppercase
* Return: 0
*/

int main(void)
{
	char l;
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
