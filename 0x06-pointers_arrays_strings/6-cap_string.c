#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @a: The string to be capitalized.
 *
 * Return: A pointer.
 */
char *cap_string(char *a)
{
	int i, x;
	char *separators = " ,;.!?\"(){}\n\t";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
			for (x = 0; *(separators + x) != '\0'; x++)
			{
				if (*(a + i - 1) == *(separators + x))
				{
					*(a + i) -= 32;
					break;
				}
				else if (i == 0)
				{
					*(a + i) -= 32;
					break;
				}
			}
	}
	return (a);
}
