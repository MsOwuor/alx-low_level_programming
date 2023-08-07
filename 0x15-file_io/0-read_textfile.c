#include "main.h"

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bread;
	ssize_t bwrite;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bread = read(fd, buffer, letters);
	if (bread <= 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bwrite = write(STDOUT_FILENO, buffer, bread);
	if (bwrite == -1 || bwrite != bread)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bwrite);
}
