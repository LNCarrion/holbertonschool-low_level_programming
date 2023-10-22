#include <stdio.h>
#include "main.h"
/**
 * _isalpha - will look for caps
 *
 *@c:will be changing letters
 *
 * Return: Always 0 (indicating success)
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
