#include "main.h"
#define NULL 0
/**
 * _strchr - locates a character in a string
 * @c: character to be spotted
 * @s: string
 *
 * Return: pointer in the occurence of c , otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (char *)NULL;
}
