#include "main.h"
/**
 * times_table - prints the 9 times table
 * start with 0
 */
void times_table(void)
{
	int multiplier;
	int product;
	int i;
	for (multiplier = 0; multiplier <= 9; multiplier++)
	{
		for (i = 0; i <= 9; i++)
		{
			product = i * multiplier;
			_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
