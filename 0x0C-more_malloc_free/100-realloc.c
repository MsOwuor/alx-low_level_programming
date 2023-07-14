#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  allocate memory and set all values to 0
 * @ptr: pointer to the memory previusly allocated (malloc(old_size))
 * @old_size: size previously allocated
 * @new_size: new size to reallocate
 *
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int x;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		else
			return (a);
	}

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
		*((char *)a + x) = *((char *)ptr + x);
	free(ptr);

	return (a);
}
