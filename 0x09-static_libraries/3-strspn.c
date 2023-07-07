#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: input
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int length = 0;
        int x;

        while (*s != '\0')
        {
                for (x = 0; accept[x]; x++)
                {
                        if (*s == accept[x])
                        {
                                length++;
                                break;
                        }
                        else if (accept[x + 1] == '\0')
                                return (length);
                }
                s++;
        }
        return (length);
}
