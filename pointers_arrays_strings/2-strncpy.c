#include "main.h"
#include <stdio.h>

/**
 * _strncpy - will copy 'n' characters from 'scr' to 'dest'
 * @n: will be the characters max number
 * @dest: destination of the copied string
 * @src: will be the string to copy
 *
 * description: will copy 'n' characters from 'scr' to 'dest'
 *
 * Return: a pointer to de dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
