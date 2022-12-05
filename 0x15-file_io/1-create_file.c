#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: The name of the file to create.
 * @text_content: Null-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nbytes;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nbytes = 0; text_content[nbytes] != '\0'; nbytes++)
			;
		nbytes = write(fd, text_content, nbytes);
	}
	close(fd);
	return (1);
}
