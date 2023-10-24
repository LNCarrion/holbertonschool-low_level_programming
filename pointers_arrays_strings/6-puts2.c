#include "main.h"

/**
 * puts2 - will put character of a string
 *
 *@str: will be the string
 */

void puts2(char *str)
{
	int i = 0;
while (str[i] != '\0')
	{
	_putchar(str[i]);
	break;
	i += 2;
	}
_putchar('\n');

}
