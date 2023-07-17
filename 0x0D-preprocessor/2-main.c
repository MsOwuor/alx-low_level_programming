#include <stdio.h>

/**
 * main -  prints the name of the file it was compiled from, followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	printf("Compiled from: %s\n", __FILE__);
	return (0);
}
