#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy string to newly allocated space in memory
 * @str: string to copy
 *
 * Return: returns a pointer to the copy, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int x;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
		ptr[x] = str[x];

	return (ptr);
}
