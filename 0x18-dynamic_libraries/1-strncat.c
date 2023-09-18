#include "main.h"
/**
 * _strncat - concatenates two strings only taking n bytes from src
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: number of bites to be used
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (original_dest);
}
