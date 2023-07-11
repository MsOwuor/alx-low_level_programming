#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argc
 * @av: arguments
 *
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	int x, y, i = 0, m = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			m++;
	}
	m += ac;

	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[i] = av[x][y];
			i++;
		}
		if (str[i] == '\0')
		{
			str[i++] = '\n';
		}
	}
	return (str);
}
