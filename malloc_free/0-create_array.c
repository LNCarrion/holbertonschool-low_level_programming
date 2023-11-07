#include "main.h"
#include <stdlib.h>

/**
 * create_array - will create an array of chars
 * @size: the size of the array
 * @c: the character for initialitiation
 *
 *Return: If size is 0 or memory allocation fails, returns NULL; otherwise, returns a pointer to the new array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
