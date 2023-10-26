#include "main.h"
#include <stdio.h>

/**
 * _strncat - concentrate in the two string
 * @dest: will be the destination of the string
 * @src: the string that will be attach
 *@n: is going to copy the bytes from 'src'
 *
 * Return: a pointer that is 'dest'
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
		dest_len++;
		n--;
	}

	dest[dest_len + i] = src[i] != '\0';

	return (dest);
}
