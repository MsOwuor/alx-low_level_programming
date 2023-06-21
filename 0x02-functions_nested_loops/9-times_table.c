#include "main.h"
/**
 * times_table - prints the 9 times table
 * start with 0
 */
void times_table(void)
{
	int multiplier;
	int product;

	for (multiplier = 0; multiplier <= 9; multiplier++)
	{
		product = 9 * multiplier;
		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar(multiplier + '0');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar(product / 10 + '0');
		_putchar(product % 10 + '0');
		_putchar('\n');
	}
}
