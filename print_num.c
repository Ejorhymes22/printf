#include <stddef.h>
#include "main.h"

/**
 * print_recurs_ - prints numbers in int
 * @list: the number
 *
 * Return: void
 */

void print_recurs_(int list)
{
	unsigned int n1;

	if (list < 0)
	{
		_putchar('-');
		n1 = -list;
	}
	else
		n1 = list;

	if (n1 / 10)
		print_recurs_(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * print_num - prints and counts digits
 * @list: list of int arg
 *
 * Return: counted digits
 */

int print_num(va_list list)
{
	int s = va_arg(list, int);
	unsigned int count = 0;
	unsigned int u;
	print_recurs_(s);

	if (s < 0)
		u = -s;
	else
		u = s;

	while (u != 0)
		count++, u /= 10;
	return (count);
}
