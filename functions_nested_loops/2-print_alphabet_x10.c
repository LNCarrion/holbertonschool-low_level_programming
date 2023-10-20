#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - will output letters from a to z
 *
 * Return: Always 0 (indicating success)
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
	}
	_putchar('\n');
	letter = 'a';
	count++;
	}
}
