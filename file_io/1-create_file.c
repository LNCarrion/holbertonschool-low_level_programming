#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: string being evaluated
 *
 * Return: lengt of string
 */

int _strlen(char *s)
{
	int i = 0;

	while(*(s+i))
		++i;
	return (i);
}

/**
 * create_file - Creates a file and writes content to it
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_status, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		write_status = write(fd, text_content, i);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
