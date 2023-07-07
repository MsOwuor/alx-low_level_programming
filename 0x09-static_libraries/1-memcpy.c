#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes to be copied
 * @src: memory area to be copied from
 * @dest: memory area to be copied to
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
