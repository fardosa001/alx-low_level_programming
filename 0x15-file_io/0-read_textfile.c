#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and,
 * prints it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: numbers of letters to read and write.
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t length_r, char_wrote;
	char *buffer;

		if (filename == NULL)
			return (0);
	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
	buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);
	length_r = read(fd, buffer, letters);
	if (length_r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	char_wrote = write(STDOUT_FILENO, buffer, length_r);
	if (char_wrote == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (length_r);
}
