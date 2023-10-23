#include "main.h"
#include <stdio.h>
/**
 * swap_int - will swap integer value
 * @a: is an integer
 * @b: is an integer
 *
 */


void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
