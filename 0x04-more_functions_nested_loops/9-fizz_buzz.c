#include <stdio.h>
/**
 * main - print numbers from 1 to 100.
 * if number is divisible by both 3 and 5 "FizzBuzz"
 * if number is divisible by 3 "Fizz"
 * if number is divisible by 5 "Buzz"
 * otherwise, print the number
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
