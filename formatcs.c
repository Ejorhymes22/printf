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
	char *p;
	unsigned int l;
	int c;
	int j = 0;
	va_list list;
	int q;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch(*(format + 1))
			{
				case 'b':
					q = va_arg(list, int);
					rec_bin(q);
					break;
				case 'c':
					c = va_arg(list, int);
					write(1, &c, 2);
					j++;
					break;
				case 's':
					p = va_arg(list, char *);
					l = _strlen(p);
					write(1, p, l);
					j += l;
					break;
				case '%':
					write(1, "%", 1);
					j++;
					break;
				case 'i':
					q = va_arg(list, int);
					_print_number(q);
					break;
				case 'd':
					q = va_arg(list, int);
					_print_number(q);
					break;
				default:
					continue;
			}
			format++;
		}
		else
		{
			write(1, format, 1);
			j++;
		}
		format++;
	}
	return (j);
}

/**
 * _strlen - gets the length of a string
 * @s: the string
 *
 * Return: its lenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
