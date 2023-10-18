#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
*main - will print the numbers
*
* Description:will count from 0 to 10
* Return: 0
*/

int main(void)
{
	int l;

	for (l = 0; l <= 9; l++)
	{
		if (l <= 9)
		{
			continue;
			putchar(',');
			putchar(' ');
		}
		putchar(l + '0');
	}
	putchar('\n');
	return (0);
}
