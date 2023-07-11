#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int longi = 0;

	while (*str != '\0')
	{
		longi++;
		str++;
	}
	return (longi);
}

/**
 * _strncpy - copies a string only taking n bytes from src
 * @str: string to be copied
 * @src: string to be copied
 * @n: number of bites to use from src
 *
 * Return: concatenated string
 */

char *_strncpy(char *str, char *src, int n)
{
	char *original_str = str;

	while (*src &&n > 0)
	{
		*str = *src;
		str++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
	return (original_str);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings, NULL if it fails
 */

char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	int count = 0;
	int len = _strlen(str);
	char **words = NULL;

	if (str == NULL || *str == '\0')
	{
		return (NULL); /* return NULL if string is NULL or empty */
	}

	/* count the number of words in the string */
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	/* Allocate memory for the array of words */
	words = (char **)malloc((count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL); /* Retunr NULL if memory allocation fails */
	}

	/* Iterate through the string to extract words */
	while (i < len)
	{
		/* Skip leading spaces */
		while (i < len && str[i] == ' ')
		{
			i++;
		}

		/* Find the end of the current word */
		k = i;
		while (k < len && str[k] != ' ')
		{
			k++;
		}
		/* Allocate memory for the word */
		words[j] = (char *)malloc((k - i + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			/* Free memory and return NULL if memory allocation fails */
			for (i = 0; i < j; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		/* Copy the word into the array */
		_strncpy(words[j], &str[i], k - i);
		words[j][k - i] = '\0'; /*NULL-terminate the word */

		j++;
		i = k;
	}
	words[count] = NULL; /*Set the last element to NULL */

	return (words);
}
