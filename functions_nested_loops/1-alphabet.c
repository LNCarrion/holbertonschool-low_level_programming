#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - will output letters from a to z
 *
 * Return: Always 0 (indicating success)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
