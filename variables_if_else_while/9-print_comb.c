#include <stdio.h>
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
		putchar((l % 10) + '0');
		if (l < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
