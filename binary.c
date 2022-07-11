#include "main.h"

/**
 * rec_bin - recursively prints out the bin digits
 * @i: the integer
 *
 * Return: void
 */

void rec_bin(unsigned int i)
{
	if ((i / 2) == 0)
		;
	else
		rec_bin(i / 2);
	
	_putchar((i % 2) + '0');
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
