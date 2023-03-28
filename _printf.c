#include "main.h"

/**
 * _printf - formats and prints data
 * @format: data format
 *
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	const char *p;

	if (!format)
		return(-1);

	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p, &k);
			continue;
		}
		p++;
	}

	va_end(args);
}
