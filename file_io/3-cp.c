#include "main.h"

/**
 * print_error_and_exit - Print error message and exit program
 * @exit_code: Exit code to use when exiting
 * @message: Error message format string
 * @file_name: File name to include in the error message
 * @fd: File descriptor to close before exiting
 */
void print_error_and_exit(int exit_code, const char *message, const char *file_name, int fd)
{
	dprintf(STDERR_FILENO, message, file_name);
	if (fd != -1)
		close(fd);
	exit(exit_code);
}
/**
 * main - Copy the content of a file to another file
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, other values on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1], -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		print_error_and_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);

	while ((read_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
			print_error_and_exit(99, "Error: Can't write to %s\n", argv[2], fd_from);
	}
	if (read_bytes == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1], fd_from);

	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", argv[1], fd_to);

	if(close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", argv[2], -1);

	return (0);
}


