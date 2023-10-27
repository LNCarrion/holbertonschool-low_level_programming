#include "main.h"
#include <stdio.h>

/**
 * reverse_array - will copy and array backwards
 *
 * @a: pointer to the array
 * @n: number of the array
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
