#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @k: counter through string
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */

int _putchar(char c, int *k)
{
	*k += 1;
	return (write(1, &c, 1));
}
