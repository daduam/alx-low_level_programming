#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 *
 * @filename: Filename of text file to read.
 * @letters: Number of letters to read and print.
 * Return: The actual number of letters read and printed.
 *         Or 0 if the file cannot be opened or read, if the filename is NULL,
 *         and write fails or does not write the expect amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nbytes;
	char *buf;

	if (filename == NULL)
		return (0);
	if ((fd = open(filename, O_RDONLY)) == -1)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
		return (0);
	if ((nbytes = read(fd, buf, letters)) == -1)
		return (0);
	buf[letters] = '\0';
	if ((nbytes = write(1, buf, nbytes)) == -1)
		return (0);
	free(buf);
	close(fd);
	return (nbytes);
}
