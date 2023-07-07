#include "main.h"
/**
 * _strcat -  concatenates two strings
 * @dest: string to be appended
 * @src: string to be appended
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
        char *original_dest = dest;

        while (*dest)
        {
                dest++;
        }
        while (*src)
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';

        return (original_dest);
}
