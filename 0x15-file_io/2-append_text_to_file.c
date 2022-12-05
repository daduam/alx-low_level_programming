#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: Null-terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nbytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nbytes = 0; text_content[nbytes]; nbytes++)
			;
		nbytes = write(fd, text_content, nbytes);
	}
	close(fd);
	return (nbytes == -1 ? -1 : 1);
}
