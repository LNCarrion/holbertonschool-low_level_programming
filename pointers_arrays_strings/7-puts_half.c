#include "main.h"

/**
 * puts_half - will print the half of the string
 *
 * @str: will be the string
 */

void puts_half(char *str)
{
	int i = 0;
	int start = 0;

	while (str[i] != '\0')
		i++;

	start = (i - 1) / 2 + 1;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
