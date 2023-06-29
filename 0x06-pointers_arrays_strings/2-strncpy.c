#include "main.h"
/**
 * _strncpy - copies a string only taking n bytes from src
 * @dest: string to be copied
 * @src: string to be copied
 * @n: number of bites to use from src
 * Return: concatentaed string
 */
char *_strncpy(char *dest, char *src,  int n)
{
	char *original_dest = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original_dest);
}
