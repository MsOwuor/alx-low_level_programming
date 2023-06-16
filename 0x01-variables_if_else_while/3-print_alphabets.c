#include <stdio.h>
/**
 * main - Print alphabets in lowercase and UPPERCASE
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char UPPER = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (UPPER <= 'Z')
	{
		putchar(UPPER);
		UPPER++;
	}
	putchar('\n');
	return (0);
}
