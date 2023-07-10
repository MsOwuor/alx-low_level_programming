#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 *
 * Return: 1 (success)
 * On error, -1 is returned, and errno is eet appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
