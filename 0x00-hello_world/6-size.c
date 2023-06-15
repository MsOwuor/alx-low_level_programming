#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of short: %zu byte(s)\n", sizeof(short));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long: %zu byte(s)\n", sizeof(long));
	return (0);
}
