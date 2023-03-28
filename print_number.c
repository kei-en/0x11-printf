#include "main.h"

/**
 * print_number - prints number from input
 * @n: the character to print
 * @k: counter through string
 *
 * Return: void
 */
void print_number(int n, int *k)
{
	int y;

	if (n == 0)
		_putchar((n + '0'), k);
	else if (n < 0)
	{
		n = n * (-1);
		_putchar('-', k);
		for (y = 1000000000; y > 0; y = y / 10)
		{
			if (n / y != 0)
				_putchar(((n / y) % 10 + '0'), k);
		}
	}
	else
	{
		for (y = 1000000000; y > 0; y = y / 10)
		{
			if (n / y != 0)
				_putchar(((n / y) % 10 + '0'), k);
		}
	}
}
