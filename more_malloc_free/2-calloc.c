#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it with zeros
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	byte_ptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
