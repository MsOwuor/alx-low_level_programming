#include "main.h"
/**
 * _islower - check if char is lowercase
 * @c: is the character to be checked
 * main - uses built in function
 * Return: 1 if char is lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
