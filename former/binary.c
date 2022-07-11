#include "main.h"

/**
 * rec_bin - recursively prints out the bin digits
 * @i: the integer
 *
 * Return: void
 */

void rec_bin(int i)
{
	if ((i / 2) == 0)
		;
	else
		rec_bin(i / 2);
	_putchar((i % 2) + '0');
}
