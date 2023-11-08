#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates the memory
 *
 * @b: unsigned int
 *
 * Return: pointer of the memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
