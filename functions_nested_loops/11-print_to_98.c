#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Prints natural numbers from n to 98.
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from the given
 * starting number 'n' to 98, separated by a comma and space. It prints the
 * numbers in ascending order if 'n' is less than or equal to 98, and in
 * descending order if 'n' is greater than 98.
 *
 * print_number - Prints a number (including negative numbers) using putchar
 *
 * @n: The number to be printed
 */
void print_number(int n)
{
	if (n == 0 || n == 98)
	{
		_putchar(n + '0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
void print_to_98(int n)
{
	int i;
for (i = n; i != 99; i < 98 ? i++ : i--)
{
	print_number(i);
if (i == 98)
	{
	_putchar('\n');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
	}
	}
}
