#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: Null terminated string to add to the end
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	char *ptr;
	ssize_t length, text_len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (text_len = 0, ptr = text_content; *ptr; ptr++)
			text_len++;

		length = write(fd, text_content, text_len);
	}
	if (close(fd) == -1 || text_len != length)
		return (-1);

	return (1);
}
