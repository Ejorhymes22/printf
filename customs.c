#include "main.h"
#include <stddef.h>

char *convert(unsigned long int num, int lower)
{
	char *rep;
	char buff[50];
	char *str;

	str = &buff[49];
	*str = '\0';

	rep = (lower) ? "0123456789ABCDEF" : "0123456789abcdef";
	
	do {
		*--str = rep[num % 16];
		num /= 16;
	} while (num);

	return (str);
}


/**
 * print_S - prints a hex custom string
 * @list: argument variable
 *
 * Return: count of string
 */

int print_S(va_list list)
{
	char *s = va_arg(list, char *);
	int i = 0;
	int j = 0;
	int count = 0;
	char *str;

	while (s[i])
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			str = convert(s[i], 1);
			if (!str[1])
				count += _putchar('0');
			while (str[j])
				count += _putchar(str[j++]);
		}
		else
		_putchar(s[i]);
		i++;
	}
	return (count);
}


/**
 * print_address - prints the address of a character
 * @list: the list
 *
 * Return: count
 */

int print_address(va_list list)
{
	unsigned long int n = va_arg(list, unsigned long int);
	char *s;
	unsigned int a = 0;

	s = convert(n, 0);
	_putchar('0');
	_putchar('x');
	while (*s)
	{
		_putchar(*s++);
		a++;
	}

	return (a + 2);
}

/**
 * print_rev - prints string in reverse
 * @list: argument list
 *
 * Return: count
 */

int print_rev(va_list list)
{
	char *s = va_arg(list, char *);
	int i = 0;
	int j;

	while (s[i])
		i++;
	i = i - 1;

	j = i;
	while (i >= 0)
		_putchar(s[i--]);
	return (j + 1);
}


/**
 * print_rot - prints the rot13 of a string
 * @list: list argument
 *
 * Return: count
 */


int print_rot(va_list list)
{
	char *s = va_arg(list, char *);
	int i = 0;
	int j = 0;
	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	char *rot = "nmnopqrstuvwxyzabcdefghijkl";

	while (s[i])
	{
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			{
				while (alpha[i])
				{
					if (s[i] == alpha[j])
					{
						_putchar(rot[j]);
						break;
					}
					else if(s[i] == (alpha[j] - 32))
					{
						_putchar((rot[j] - 32));
						break;
					}
					j++;
				}
				j = 0;
			}
			else
				_putchar(s[i]);
			i++;
	}
	return (i);
}
