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
	char L;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);
	putchar('\n');
	return (0);
}
