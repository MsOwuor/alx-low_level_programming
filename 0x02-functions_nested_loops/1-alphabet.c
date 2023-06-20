#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
