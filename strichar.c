#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints a character
 * @list: comes with the characteres
 *
 * Return: number of characters
 */

int print_char(va_list list)
{
	char n = va_arg(list, int);

	_putchar(n);
	return  (1);
}


/**
 * print_string - prints a string
 * @list: list argument
 *
 * Return: length of the string
 */

int print_string(va_list list)
{
	int len = 0;
	char *n = va_arg(list, char *);

	while (n[len])
	{
		_putchar(n[len++]);
	}
	return (len);
}
