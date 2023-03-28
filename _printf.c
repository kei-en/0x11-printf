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

	if (!format)
		return(-1);

	va_start(args, format);

	va_end(args);
}
