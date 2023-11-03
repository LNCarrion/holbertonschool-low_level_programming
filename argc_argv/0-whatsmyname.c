#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success
 */

int main (int argc, char *argv[])
{
	(void)argv;

	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
