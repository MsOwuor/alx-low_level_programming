#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to a string to write to the file
 * Return: -1 if it fails, 1 on Success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bwrite;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT |O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bwrite = write(fd, text_content, strlen(text_content));
		if (bwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
