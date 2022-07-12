#include "main.h"

/**
 * rec_bin - recursively prints out the bin digits
 * @i: the integer
 *
 * Return: void
 */

void rec_bin(unsigned int i)
{
	char *rep = "01";
	char buffer[50];
	char *str;

	str = &buffer[49];

	while (i)
	{
		*--str = rep[i % 2];
		i /= 2;
	}

	while (*str)
		_putchar(*str++);
}

int print_bin(va_list list)
{
	unsigned int a = 0;
	unsigned int n = va_arg(list, unsigned int);

	rec_bin(n);

	while (n)
		a++, n /= 2;

	return (a);
}
