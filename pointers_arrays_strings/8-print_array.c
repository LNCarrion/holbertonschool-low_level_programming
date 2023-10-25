#include "main.h"
#include <stdio.h>
/**
 * print_array - will print the elements of "n"
 * @a: is a variable
 * @n: is a variable
 *
 * Return: will not print if n is negative
 *
 */


void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		if(a[i] == 0)
			continue;

		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
