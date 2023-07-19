#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to a function
 */

void print_name(char *name, void(*f)(char *))
{
	if (f == NULL || f == NULL)
		return;

	f(name);
}
