#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters in string
 *
 * @str: the input of the string
 *
 * Return: a poijnter that will modify the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		i++;
	}
	return (str);
}
