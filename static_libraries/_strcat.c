#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 *
 * Return: A pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return result;
}

