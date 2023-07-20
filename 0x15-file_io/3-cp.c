#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 * Return:0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(av[1], av[2]);
	exit(0);
}
/**
 * copy_file - copies content of a file to another file.
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: 0 (success), 97-100 (exit value errors)
 */
void copy_file(const char *file_from, const char *file_to)
{
	int f_fd, t_fd;
	char buff[1024];
	int read_n;

	f_fd = open(file_from, O_RDONLY);
	if (!file_from || f_fd == -1)
	{
	dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
	exit(98);
	}

	t_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_n = read(f_fd, buff, 1024)) > 0)
	{

		if (write(t_fd, buff, read_n) != read_n || t_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
		       exit(99);
		}
	}
	if (read_n == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(f_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", f_fd);
		exit(100);
	}
	if (close(t_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", t_fd);
		exit(100);
	}
}
