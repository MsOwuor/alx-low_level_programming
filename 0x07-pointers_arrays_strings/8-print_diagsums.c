#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a squre matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		sum1 += sum1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum2 += a[x * size + (size - 1 - x)];
	}
	printf("%d, %d\n", sum1, sum2);
}
