#include "main.h"

/**
 * print_unsigned - prints unsigned integer
 * @list: list of arguments
 *
 * Return: number of char
 */

int print_unsigned(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	char *str;
	char buffer[50];
	int i = 0;
	char *rep = "0123456789";

	str = &buffer[49];
	*str = '\0';
	do
	{
		*--str = rep[n % 10];
		n /= 10;
		i++;
	} while (n);

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (i);
}

/**
 * print_octal - prints octal value of a number
 * @list: argument variable
 *
 * Return: number of octal printed
 */

int print_octal(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
        char *str;
        char buffer[50];
        int i = 0;
	char *rep = "01234567";

        str = &buffer[49];
        *str = '\0';
        do
        {
                *--str = rep[n % 8];
                n /= 8;
                i++;
        } while (n);

	while (*str)
	{
		if (*str == '0')
			_putchar('0');
		else
			_putchar(*str);
		str++;
	}
	return (i);
}


/**
 * print_hex - prints lowercase hex
 * @list: argument list
 *
 * Return: count of hex
 */

int print_hex(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
        char *str;
        char buffer[50];
        int i = 0;
        char *rep = "0123456789abcdef";

        str = &buffer[49];
        *str = '\0';
        do
        {
                *--str = rep[n % 16];
                n /= 16;
                i++;
        } while (n);

        while (*str)
        {
                if (*str == '0')
                        _putchar('0');
                else
                        _putchar(*str);
                str++;
        }
        return (i);
}

/**                                                    * print_HEX - prints lowercase hex
 * @list: argument list                                *
 * Return: count of hex
 */

int print_HEX(va_list list)
{
        unsigned int n = va_arg(list, unsigned int);
        char *str;
        char buffer[50];
        int i = 0;                                            char *rep = "0123456789ABCDEF";
                                                              str = &buffer[49];
        *str = '\0';
        do
        {
                *--str = rep[n % 16];
                n /= 16;
                i++;
        } while (n);
	
	while (*str)
        {
                if (*str == '0')
                        _putchar('0');
                else
                        _putchar(*str);
                str++;
        }
        return (i);
}
