#include <stdio.h>
#include "main.h"
/**
 * _abs - compute the value of an integer
 *
 *@n:will be changing numbersfrom the real scale
 *
 * Return: Always 0 (indicating success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
