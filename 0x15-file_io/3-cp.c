#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * error_handler - handles errors for cp
 * @exit_code: exit code
 * @m: message
 * @type: data type
 */

void error_handler(int exit_code, char *m, char type, ...)
{
	va_list args;

	va_start(args, type);
	if (type == 's')
		dprintf(STDERR_FILENO, m, va_arg(args, char *));
	else if (type == 'd')
		dprintf(STDERR_FILENO, m, va_arg(args, int));
	else if (type == 'n')
		dprintf(STDERR_FILENO, m, "");
	else
		dprintf(STDERR_FILENO, "Error: does not match any type\n");
	va_end(args);
	exit(exit_code);
}

/**
 * main- copies content of a file to another file.
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */

int main(int ac, char *av[])
{
	int f_fd, t_fd;
	char buff[1024];
	ssize_t n_read, n_written;

	if (ac != 3)
		error_handler(97, "Usage: cp file_from file_to\n", 'n');

	f_fd = open(av[1], O_RDONLY);
	if (f_fd == -1)

		error_handler(98, "Error: can't read from file %s\n", 's', av[1]);


	t_fd = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (t_fd == -1)
		error_handler(99, "Error: can't write to %s\n", 's', av[2]);

	while ((n_read = read(f_fd, buff, 1024)) > 0)
	{

		n_written = write(t_fd, buff, n_read);
		if (n_written == -1)
		error_handler(99, "Error: can't write to %s\n", 's', av[2]);
	}

	if (n_read == -1)

		error_handler(98, "Error: can't read from file %s\n", 's', av[1]);
	if (close(f_fd) == -1)
		error_handler(100, "Error: can't close fd %d\n", 'd', f_fd);

	if (close(t_fd) == -1)
		error_handler(100, "Error: can't close fd %d\n", 'd', t_fd);

	return (0);
}
