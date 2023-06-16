#include <stdio.h>
/**
 * main - print letters in lowercase
 * print letters in reverse z..a
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

		while (letter >= 'a')
		{
			putchar(letter);
			letter--;
		}
	putchar('\n');
	return (0);
}
