#include "main.h"

/**
 * create_file - create file
 * @filename: file to create
 * @text_content: Null terminated string to write to file
 * Return: return 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		length = write(fd, text_content, inlen);
	}
	if (close(fd) == -1 || inlen != length)
		return (-1);
	return (1);
}

