#include "main.h"
#include <stdlib.h>

 /**
  * malloc_checked - Allocates memory using malloc
  * @b: size of the memory to allocate
  *
  * Return: Pointer to the allocated mameory if successful
  * Exits with a status value of 98 if allocation fails
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
