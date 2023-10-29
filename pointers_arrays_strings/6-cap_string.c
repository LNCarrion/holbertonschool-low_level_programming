#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalizes all words in a string.
 *
 * @str: The input string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			capitalize_next = 0;
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
				str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}')
			capitalize_next = 1;
		}
		i++;

	return (str);
}
