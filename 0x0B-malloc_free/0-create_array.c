#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of the array
 * @c: character
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
