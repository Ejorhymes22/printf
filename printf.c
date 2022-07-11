#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <stdint.h>

/**
 * _printf - produces output according to a format
 * @format: is a character string
 *
 * Return: num of characters printed
 */

int _printf(const char *format, ...)
{
	char c;
	int (*z)(va_list);
	va_list list;
	int len;
	int tlen = 0;

	if (!format || (*format == '%' && !(*(format + 1))))
		return (-1);

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				c = '%';
				write(1, &c, 1);
				tlen++;
			}
			else
			{
				z = get_print(*format);
				len = z(list);
				tlen += len;
			}
		}
		else
		{
			write(1, &(*format), 1);
			tlen++;
		}
		format++;
	}
	va_end(list);
	return (tlen);
}
