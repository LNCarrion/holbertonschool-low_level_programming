#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}

		i++;
	}

	if (i == 0)
	{
		return (0);
	}

	return (result * sign);
}
