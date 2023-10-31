#include "main.h"
#include <stdio.h>

/**
 * factorial - Return the factorial of a number
 * @n: the number for factorial
 *
 * Return: the factorial number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
