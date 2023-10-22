#include "main.h"
#include <stdio.h>
/**
 *times_table - will print time times table
 *
 * @i - will be a product
 * @j - will be a product
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i, j, product;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
	product = i * j;
	if (j == 0)
	{
		_putchar('0' + product);
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		if (product < 10)
		{
			_putchar(' ');
			_putchar('0' + product);
		}
		else
		{
			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
	}
}
_putchar('\n');
}
}
