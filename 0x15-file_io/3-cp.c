#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "fcntl.h"

/**
 * close_file_or_exit - Close file or exit with code 100 if close fails.
 *
 * @fd: File descriptor.
 */
void close_file_or_exit(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: int
 * @argv: char**
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, last_read = 1024, last_write;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = creat(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (last_read >= 1024)
	{
		last_read = read(file_from, buf, last_read);
		if (last_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		last_write = write(file_to, buf, last_read);
		if (last_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file_or_exit(file_from);
	close_file_or_exit(file_to);
	return (0);
}
