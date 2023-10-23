#include "main.h"
#include <stdio.h>

/**
 * _strlen - will count the length of a string
 * @s: is a variable
 * Return: will be length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
