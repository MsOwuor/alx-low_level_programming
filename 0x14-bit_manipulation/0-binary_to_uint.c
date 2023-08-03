#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: string containing binary
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			value = value << 1;
			value += b[i] - '0';
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (value);
}
