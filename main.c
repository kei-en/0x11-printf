#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("String:[%s]\n", "I am a string !");

	_printf("Character: [%c]\n", 'H');

	_printf("%%\n");

	return (0);
}
