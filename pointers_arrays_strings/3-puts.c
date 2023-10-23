#include <stdio.h>
#include "main.h"

/**
 * _puts - will print the strain
 *
 * @str: will be the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
