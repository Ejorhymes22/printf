#include <unistd.h>

/**
 * _putchar - prints a character a time
 * @c: the character
 *
 * Return: int or zero
 */

int  _putchar(char c)
{
	return (write(1, &c, 1));
}
