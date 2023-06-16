#include <stdio.h>
/**
 * main - prints numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int letter = 'a';

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
