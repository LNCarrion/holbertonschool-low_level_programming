#include <stdio.h>
#include "main.h"
/**
 * _islower - will output letters from a to z
 *
 *@c: will be the variable
 *
 * Return: Always 0 (indicating success)
 */

int _islower(int c)
{
if (c <= 'a' && c <= 'z')
	{
	return (1);
	}
else
	{
	return (0);
	}
}
