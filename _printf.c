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
	int d, k = 0;
	unsigned int i;
	char *s;

	if (!format)
		return (-1);

	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p, &k);
			continue;
		}

		p++;

		switch (*(p))
		{
			case 'c':
				i = va_arg(args, int);
				_putchar(i, &k);
				break;
			case 's':
				s = va_arg(args, char *);
				_puts(s, &k);
				break;
			case '%':
				_putchar('%', &k);
				break;
			case 'd':
				d = va_arg(args, int);
				if (d < 0)
				{
					d = -d;
					_putchar('-', &k);
				}
				print_number(d, &k);
				break;
			case 'i':
				d = va_arg(args, int);
				print_number(d, &k);
				break;
		}
	}

	va_end(args);
	return (k);
}
