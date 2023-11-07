#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         If str is NULL or memory allocation fails, returns NULL.
 */

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	dup_str = (char *)malloc(sizeof(char) * (length + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
