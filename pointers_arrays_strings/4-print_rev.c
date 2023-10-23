#include <stdio.h>
#include <string.h>

/**
 * print_rev - will print the string in reverse
 *
 * @s: will be the length
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i = length - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
