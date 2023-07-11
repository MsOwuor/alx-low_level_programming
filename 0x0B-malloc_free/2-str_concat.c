#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int x;
	unsigned int len = 0;
	unsigned int len1 = 0;

	if (s1 == 0)
		s1 = "";
	else
		for (; s1[len]; len++);
	 
	if (s2 == 0)
		s2 = "";
	else
		for (; s2[len1]; len1++);

	len1++;

	ptr = malloc((len + len1) * sizeof(char));

	if (ptr == 0)
		return (NULL);

	for (x = 0; x <= (len + len1); x++)
	{
		if (x < len)
			ptr[x] = s1[x];
		else
			ptr[x] = s2[x - len1];
	}
	return (ptr);
}
