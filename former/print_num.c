#include <stddef.h>
#include "main.h"

/**
 * _print_number - prints numbers in int
 * @s: the number
 *
 * Return: count of num
 */

void _print_number(int s)
{
	if (s < 0)
	{
		_putchar('-');
		s = -s;
	}
	if (s / 10)
		_print_number(s / 10);
	_putchar((s % 10) + '0');
}
