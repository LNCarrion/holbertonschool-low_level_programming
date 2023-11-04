#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * is_number - checks if a string is a positive number
 * @s: the string to check
 * Return: 1 if it's a number, 0 otherwise
 */
int is_number(char *s)
{
	if (*s == '\0')
		return (0);

	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}





