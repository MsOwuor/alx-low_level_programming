#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of two arguments
 * _atoi - converts to integer
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if not two arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
