#include "main.h"
#include <stddef.h>

/**
 * get_print - is a function pointer that points to the function
 * that corrolates with the character in format
 * @s: the character
 * @list: the arguments
 *
 * Return: pointer to the function
 */

int (*get_print(char s))(va_list list)
{
	spec_t pec[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_num},
		{'i', print_num},
		{'b', print_bin},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_S},
		{'p', print_address},
		{'r', print_rev},
		{'R', print_rot}
	};
	int i = 0;

	while (i < 12)
	{
		if (pec[i].spec == s)
			return (pec[i].f);
		i++;
	}
	return (NULL);
}
