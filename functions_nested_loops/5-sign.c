#include <stdio.h>
#include "main.h"
/**
 * print_sign - will add signs to the numbers
 *
 *@n:will be changing numbersfrom the real scale
 *
 * Return: Always 0 (indicating success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
