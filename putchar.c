#include <unistd.h>

/**
 * _putchar - prints a character a time
 * @c: the character
 *
 * Return: int or zero
 */
/*
int  _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		(write(1, &buffer, 1));
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}

*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
