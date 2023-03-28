#include "main.h"

/**
 * _puts - prints a string
 * @k: counter
 * @str: string to be printed
 *
 * Return: void
*/
void _puts(char *str, int *k)
{
	while (*str != '\0')
	{
		_putchar(*str, k);
		str++;
	}
}
